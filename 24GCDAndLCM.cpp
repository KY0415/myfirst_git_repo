#include<iostream>
using namespace std;
int main()
{
    int number1,number2,n1,n2,reminder,LCM;
    cout<<"Enter two integers to determine GCD & LCM: ";
    cin>>number1>>number2;

    n1=number1;
    n2=number2;

    while(n2!=0)
    {
        reminder=n1%n2;
        n1=n2;
        n2=reminder;
    }

    LCM=(number1*number2)/n1;

    cout<<"GCD = "<<n1<<endl<<"LCM = "<<LCM;
}