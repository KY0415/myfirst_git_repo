#include <iostream>
using namespace std;

void display(int a = 10, int b = 20)
{
    cout << a << endl;
    cout << b << endl;
}

void show(int a, int b = 5)
{
    cout << a << endl << b << endl;
}

int main()
{
    display();

    display(25);

    display(30, 40);

    show(1);

    show(100, 200);
}