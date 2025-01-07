#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character:";
    cin>>ch;

    ch = tolower(ch);   //for converting upper case to lower case...

    switch(ch)
    {

        //Multiple case

        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
        cout<<"Vowel";
        break;

        default :
        cout<<"Consonant";
    }
}