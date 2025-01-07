#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    cout << endl << "Here we will sort an array in ascending order(using default sort() function)...." << endl;
    cout << "Take the size of the array : " ;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elememts of the array: ";
    for (int i =0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl << "The array is : ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // default sort (Ascending order sort).........
    
    int len = sizeof(arr) / sizeof(arr[0]); // determine the number of elements of the array..

    sort(arr, arr + len);   // Sort() function

    cout << "Array after sorting using default sort(in ascending order) is : ";

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    } 

    cout << endl << endl << endl;




    //  descending order sort..........

    cout << "Now, we will sort an another array in descending order...." << endl;

    cout << "Take the size of the array: ";
    int m;
    cin >> m;
    int arr2[m];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    cout << "The array is : ";
    for (int i = 0; i < m; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    int len2 = sizeof(arr2) / sizeof(arr2[0]); // determine the number of elements of the array...

    sort(arr2, arr2 + len2, greater<int>());   // Sort() function..........for descending

    cout << "Array after sorting in descending order is : ";

    for (int i = 0; i < len2; i++)
    {
        cout << arr2[i] << " ";
    } 

    cout << endl << endl << endl;

    return 0;
}