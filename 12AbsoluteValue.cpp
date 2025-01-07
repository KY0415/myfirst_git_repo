#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number:  ";
    cin>>number;
    if(number<0)
    {
        cout<<"The absolute value of this number is "<<(-number)<<endl;
    }
    else
    {
        cout<<"The absolute value of this number is "<<number;
    }
    return 0;
}