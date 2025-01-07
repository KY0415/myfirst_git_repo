#include <iostream>
using namespace std;

void sum(int a, int b)
{
    int sum = a + b;
    cout << sum << endl;
}

void sum(double a, double b, double c)
{
    double sum = a + b + c;
    cout << sum << endl;
}

void sum(char a, int b)
{
    
    cout << a << " " << b << endl;
}

int main()
{
    sum(10, 15);
    sum('c', 12);
    sum(100.2, 200.3, 300.1);

    return 0;
}