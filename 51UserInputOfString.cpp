#include <iostream>
#include <string>
#include <stdio.h>  // for using gets() function
using namespace std;
int main()
{

    char a[50];

    cout << "Enter Your Name: ";

    gets(a);    // For getting input of a string with space

    cout << a << endl;

    cout << endl;

    string fullName;
    cout<< "Enter your full name : ";
    getline(cin, fullName);     // Here we are !!!......    We can solve the space issue of user input by using ""getline()"" function... here we will use cin & the variable name as parameters in getline function.........

    cout << endl << "My full name is : " << fullName << endl;

    
    string name;
    cout << "Enter your full name: ";
    cin >> name;
    cout << endl << "My full name is : " << name << endl;   // Here, it will not take the characters after space. It will take only a word....
    
    
    return 0;
}