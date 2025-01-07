#include<iostream>
#include<iomanip>//This header is for 
using namespace std;
int main()
{
    float a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<showpoint;//for showing point and the digits after point

    cout<<"Sum is : "<<a+b<<endl;
    cout<<"Subtraction is : "<<a-b<<endl;

    //cout<<noshowpoint;//for not showing point and the digits after point

    cout<<"Multiplication is : "<<a*b<<endl;
    cout<<"Division is : "<<a/b<<endl<<endl;//this line will show automatically because of float datatype and division operation..



    float c,d;

    cout<<"Enter another two numbers: ";
    cin>>c>>d;

    cout<<fixed; //"fixed" will fixed the digits only after point.It will use befor "setprecision"

    cout<<setprecision(3);//only "setprecision" for showing digits as much as I want(before & after point)---

    //"setw" will use for changing printing format or print space ....
    cout<<setw(20)<<"Sum is : "<<c+d<<endl;
    cout<<setw(20)<<"Subtraction is : "<<c-d<<endl;

    cout<<setw(20)<<"Multiplication is : "<<c*d<<endl;
    cout<<setw(20)<<"Division is : "<<c/d;

}