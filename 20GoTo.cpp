// goto Statement

/*

The goto statement can be used to alter the normal flow of control in a program. 
This statement causes the program to jump to a specified label. 
A label can be any alphanumeric character set starting with a letter and terminating with the colon (“:”) character.

*/

#include<iostream>
using namespace std;
int main()
{
    int i = 1;

    level:
        cout << i <<"\t";
        i++;

        if(i<5)
        {
            goto level;     //level is calling here...
        }

        return 0;
}