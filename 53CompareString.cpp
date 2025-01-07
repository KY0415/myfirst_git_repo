#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1;
    string str2;

    cout << "Enter string 1 : ";
    getline(cin,str1);

    cout << endl << "Enter string 2 : ";
    getline(cin,str2);

    cout << endl << str2.compare(str1) << endl; /* It will give an integer value.If the value is positive, the str2 is lexicographically bigger than str1.....If the value is 0, the str2 and str1 are lexicographically equal......If the vlaue is negative, the str2 is lexicographically smaller than str1 */ 
    
    if (str2.compare(str1) == 0)
    {
        cout << "Strings are equal." << endl;
    }

    else if (str2.compare(str1) < 0)
    {
        cout << "Strings are not equal. String 2 is lexicographically smaller than string 1" << endl;
    }

    else if (str2.compare(str1) > 0)
    {
        cout << "Strings are not equal. String 2 is lexicographically bigger than string 1" << endl;
    }

    return 0;
}