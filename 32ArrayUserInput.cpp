#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int array_size;

    cout<<"Enter the array size: ";
    cin >> array_size;

    int marks[array_size];

    for(int i=0;i<array_size;i++)
    {
        cout<<"Mark for student "<<i+1<<" = ";
        cin>>marks[i];
    }

    cout<<endl<<"Marks are: ";

    for(int i=0;i<array_size;i++)
    {
        cout<<marks[i]<<" ";
    }

    
    return 0;
}