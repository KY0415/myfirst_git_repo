//Conditional Operator or Ternary Operator

//  Expression 1 ? Expression 2 : Expression 3


#include<iostream>
using namespace std;
int main()
{
    int num1,num2,max;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    max = (num1>num2) ? num1 : num2;

    cout<<"Max = "<<max;

    return 0;
}