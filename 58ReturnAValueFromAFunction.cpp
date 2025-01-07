#include <iostream>
using namespace std;

int add(int, int);

int main()
{
    int result = add(10, 15);       // store the return value in a variable inside main function

    add(100, 200);  // this line won't work because the function is just called by this line but this line don't print returning value

    cout << add(25, 30) << endl;

    cout << "Sum = " << result << endl;     // It will also work this way
}

int add(int a, int b)
{
    int sum = a + b;
    return sum;         // value return
}