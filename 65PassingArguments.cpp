// There are 2 ways to pass value into a function

// 1. Pass by value
// 2. Pass by reference

#include <iostream>
using namespace std;

void display(int num)       // Pass by value
{
    num = 20;
}

void show(int *number)      // Pass by reference
{
    *number = 200;
}

int main()
{
    int x = 10;
    
    // Pass by value
    cout << "Before calling the display function, x = " << x << endl;

    display(x);

    cout << "After calling the display function, x = " << x << endl;

    cout << endl << endl;

    // Pass by reference
    cout << "Before calling the show function, x = " << x << endl;

    show(&x);

    cout << "After calling the show function, x = " << x << endl;
}