#include<iostream>
using namespace std;
int main()
{
    int n,position=-1;
    cout<<"Array Size: ";
    cin>>n;
    int array[n];
    int value;
    cout<<"Enter the value you want to check: ";
    cin>>value;

    cout<<"Enter the values of array: ";
    for(int i = 0; i < n; i++)
    {
        cin>>array[i];
        
        if(value==array[i])
        {
            position=i+1;
            break;
        }
    }

    if(position==-1)
    {
        cout<<"The value is "<<value<<" which couldn't be found.";
    } 
    else
    {
        cout<<"The value has been found."<<endl<<"The value is "<<value<<endl<<"The Position is " <<position;
    }


    return 0;
}