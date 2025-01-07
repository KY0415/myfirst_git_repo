#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int marks[n],i,sum=0;

    cout<<"Enter the marks: "<<endl<<endl;

    for(i=0;i<n;i++)
    {
        cout<<"Subject "<<i+1<<" :";
        cin>>marks[i];
        cout<<endl;
    }

    for(i=0;i<n;i++)
    {
        cout<<marks[i]<<endl;
        sum=sum+marks[i];
    }

    cout<<"Sum= "<<sum<<endl;

    cout<<"Average= "<<(float)sum/n;

    return 0;

}