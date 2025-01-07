#include<iostream>
using namespace std;
int main()
{
    int i,number,count=0;
    cout<<"Enter the number to check prime or not prime.The number must be greater then 1 : ";
    cin>>number;

    for(i=2;i<=number/2;i++)
    {
        if(number%i==0)
        {
            count++;
            break;
        }
        else
        {
            count=count;
        }
    }
    if(count==1)
    {
        cout<<"Not Prime";
    }
    else
    {
        cout<<"Prime";
    }

    return 0;
}