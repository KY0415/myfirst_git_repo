// assign operator "="
// plus assign     "+=" .........etc
/*

   -=
   *=
   /=
   %=
   
*/
#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int y = 3;

    x += y; // x=x+y = 8
    cout << x << endl;

    x -= y; // x=x-y = 8-3 = 5
    cout << x << endl;
}