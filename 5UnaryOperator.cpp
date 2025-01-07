#include<iostream>
using namespace std;
int main()
{
    int a = 6;
    int result1 = +a;
    cout<<result1<<endl;

    int b = 5;
    int result2 = -b;
    cout<<result2<<endl;
    
    cout<<"Enter two integers: ";

    int c,d;
    cin>>c>>d;

    c++;//post-increment

    --d;//pre-decrement

    
    cout<<c<<endl<<d<<endl;

    cout<<"Enter two integers: ";

    return 0;

}