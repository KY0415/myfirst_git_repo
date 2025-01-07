#include <iostream>
using namespace std;

int x = 10;     // Global variable. It can be used in anywhere in this program.

int y = 350;


void show()
{
    x = 20;
    cout << "Inside the show function, x = " << x << endl;
}

int main()
{
    cout << "Inside the main function, x = " << x <<endl;

    show();

    x = 30;

    cout << "Inside the main function AGAIN, x = " << x <<endl;






    cout << endl << endl;





    cout << "Now, we will see the use of scope resolution operator." << endl;

    int y = 50;

    cout << "Without using scope resolution operator, y = " << y << endl;

    cout << "With using scope resolution operator, y = " << :: y << endl;   // Scope resolution operator -->> (::)


    // We can also change the global variable's value inside the main function.....

    :: y = 30;

    cout << "With using scope resolution operator, y = " << :: y << ". Because, I have change the global variable's value." << endl;
}