#include <iostream>
using namespace std;
int main()
{
    int num1 = 5;
    int num2 = 10;
    int *p1, *p2;

    p1 = &num1;
    p2 = &num2;

    int sum = *p1 + *p2;

    cout << sum << endl;

    cout << *p1 + *p2 << endl;

    return 0;
}