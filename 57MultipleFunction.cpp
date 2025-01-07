#include <iostream>
using namespace std;

//  A prototype must be declared here if main() function comes first. Otherwise the program won't run.
void addition(int, int);
void multiplication(int, int);
void division(int, int);
void subtraction(int, int);

int main()
{
    addition(10, 20);
    subtraction(10, 5);
    multiplication(10, 10);
    division(10, 5);

    cout << "All function have called !!" << endl;

    return 0;
}


void addition(int a, int b)
{
    int sum = a + b;
    cout << "Summation = " << sum << endl;
}

void subtraction(int a, int b)
{
    int result = a - b;
    cout << "Subtraction = " << result << endl;
}

void multiplication(int a, int b)
{
    int result = a * b;
    cout << "Multiplication = " << result << endl;
}

void division(int a, int b)
{
    float result = a / b;
    cout << "Division = " << result << endl;
}