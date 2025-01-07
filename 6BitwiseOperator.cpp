/*

1. &    Bitwise AND
2. |    Bitwise OR
3. ^    Bitwise XOR
4. >>   Bitwise Shift Right
5. <<   Bitwise Shift Left
6. ~    Bitwise NOT

*/

#include<iostream>
using namespace std;
int main()
{
    int a=32, b=12;
    int c;

    c = a&b;
    cout<<c<<endl;

    c = a|b;
    cout<<c<<endl;

    c = a^b;
    cout<<c<<endl;

    int d=32;
    int e=16;
    
    int f;
    int g;

    f = d>>3;
    cout<<f<<endl;
    
    g = e<<2;
    cout<<g<<endl;

    return 0;
}