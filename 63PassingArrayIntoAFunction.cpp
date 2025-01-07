#include <iostream>
using namespace std;

void displayArray(int num[])
{
    for(int i = 0; i < 5; i++)
    {
        cout << num[i] << " ";
    }
}

void showArray(int marks[], int lengthOfArray)
{
    for(int i = 0; i < lengthOfArray; i++)
    {
        cout << marks[i] << " ";
    }
}

void userInputShowArray(int data[], int size) // look at the syntax of declaring array
{
    for(int i = 0; i < size; i++)
    {
        cin >> data[i];
    }

    for(int i = 0; i < size; i++)
    {
        cout << data[i] << " ";
    }
}


int main()
{
    int array[5] = {10, 12, 15, 18, 20};

    displayArray(array);

    cout << endl;

    showArray(array, 5);

    cout << endl;


    // User input array passing into function
    cout << "Input the length of the array: ";
    int n; 
    cin >> n;
    int array1[n];

    cout << endl << "Enter the elements: ";
    userInputShowArray(array1, n);  // look at the syntax of passing array


    return 0;
}