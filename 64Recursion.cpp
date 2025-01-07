#include <iostream>
using namespace std;
int fact(int n)
{
    // Base Case
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{
    int factorial = fact(5);

    cout << fact(4) << endl;

    cout << factorial << endl;
}