#include<iostream>
using namespace std;
int main()
{
    int number,i;
    cout<<"Enter the number: ";
    cin>>number;

    for(i=1;i<=10;i++)
    {
        cout<<number<<" X "<<i<<" = "<<number*i<<endl;
    }

    return 0;
}