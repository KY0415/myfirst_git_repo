#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    while (1)
    {
        cout << "Guess a number from 1 to 5: " ;

        int guessNumber;
        cin >> guessNumber;

        int randomNumber1 = 1 + rand() % 5;

        if(randomNumber1 != guessNumber)
        {
            cout << "You are wrong." << endl << "The random number was: " << randomNumber1 << endl << endl;
        }
        else
        {
            cout << "Congratulations!!"<< endl <<"You are right" << endl << "The random number was: " << randomNumber1 << endl << endl;
        }
    }

    return 0;
}