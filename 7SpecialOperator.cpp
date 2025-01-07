// Comma (,)
// Pointer (*)
// sizeof()

#include<iostream>
using namespace std;
int main()
{
    int a;
    float f;
    double d;
    char ch;
    char name[55];

    int c = sizeof(a);
    cout<<c<<endl;

    int s = sizeof(f);
    cout<<s<<endl;
    
    int t = sizeof(d);
    cout<<t<<endl;

    int u = sizeof(ch);
    cout<<u<<endl;

    int v = sizeof(name);
    cout<<v<<endl;

    //use of comma

    int x,y,sum;
    sum = (x = 20, y = 30, sum = x + y);
    cout<<sum<<endl;



    return 0;
}