#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int array[n];

    

    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }

    int max=array[0];

    for(int i=1; i<n; i++)
    {
        
        if(max<array[i])
        {
            max=array[i];
        }
    }

    cout<<"Max = "<<max<<endl;

    int min=array[0];
    for(int i=1; i<n; i++)
    {
        
        if(min>array[i])
        {
            min=array[i];
        }
    }

    cout<<"Min = "<<min;


    return 0;
}