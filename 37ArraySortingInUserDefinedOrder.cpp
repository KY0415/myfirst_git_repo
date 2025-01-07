#include <iostream>
#include <algorithm> // for sort()
using namespace std;

//// Comparator function to sort the array in user define ascending order.....
bool customComparator1(int a, int b)
{
    return a < b;
}

// Comparator function to sort the array in descending order
bool customComparator2(int x, int y) {
    return x > y;
}

int main() 
{
    // For Ascending Order....................



    // Input the Array
    cout << endl << "Here, we will sort an array in user defined ascending order...." << endl;
    cout << "Take the size of the array : ";
    int m;
    cin >> m;
    int arr1[m];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }

    // Print the unsorted array
    cout << endl << "The array is : ";

    for (int i = 0; i < m; i++)
    {
        cout << arr1[i] << " ";
    }

    cout << endl;

    // Determining the number of elements in the array
    int len1 = sizeof(arr1) / sizeof(arr1[0]);

    // Define the range to be sorted (for example, from index 2 to index 7)
    cout << "Please, define the range to be sorted. Enter the beginning index & the ending index: ";
    int startIndex1, endIndex1;
    cin >> startIndex1 >> endIndex1;

    // Sort the selected range using custom comparator
    sort(arr1 + startIndex1, arr1 + endIndex1 + 1, customComparator1);

    // Print the sorted array
    cout << "Array after sorting the selected range in ascending order is:\n";
    for (int i = startIndex1; i <= endIndex1; ++i)
    {
        cout << arr1[i] << " ";
    }

    cout << endl << endl << endl;




    //For Descending Order




    // Input the Array
    cout << endl << "Now, we will sort an another array in user defined descending order...." << endl;
    cout << "Take the size of the array : ";
    int n;
    cin >> n;
    int arr2[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    // Print the unsorted array
    cout << endl << "The array is : ";

    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }

    cout << endl;

    // Determining the number of elements in the array
    int len2 = sizeof(arr2) / sizeof(arr2[0]);

    // Define the range to be sorted (for example, from index 2 to index 7)
    cout << "Please, define the range to be sorted. Enter the beginning index & the ending index: ";
    int startIndex2, endIndex2;
    cin >> startIndex2 >> endIndex2;

    // Sort the selected range using custom comparator
    sort(arr2 + startIndex2, arr2 + endIndex2 + 1, customComparator2);

    // Print the sorted array
    cout << "Array after sorting the selected range in descending order is:\n";
    for (int i = startIndex2; i <= endIndex2; ++i)
    {
        cout << arr2[i] << " ";
    }

    cout << endl << endl << endl;
        

    return 0;
}