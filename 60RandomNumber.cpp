#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int randomNumber = rand();
    cout << "Random Number = " << randomNumber << endl << endl;

    for(int i = 1; i <= 10; i++)
    {
        int randomNumber1 = rand();
        cout << "Random Number = " << randomNumber1 << endl;
    }
}