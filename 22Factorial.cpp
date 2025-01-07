#include<iostream>
using namespace std;
int main()
{
    int number,i,r=1;
    cout<<"Enter the number: ";
    cin>>number;

    for(i=1;i<=number;i++)
    {

        r=r*i;
    }

    cout<<r;

    return 0;
}