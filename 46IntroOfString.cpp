/*

String-->> Character type array ............

Declaration using character type array--->>>

char string_name[string_size];

Header file for string is #include<string>

*/

#include<iostream>
#include<string>        // Header file for string
using namespace std;
int main()
{

    // Declaration using character type array

    char s1[5];

    s1[0]='T';
    s1[1]='O';
    s1[2]='M';
    s1[3]='A';
    s1[4]='L';

    s1[5]='\0';  // Use of null character to end the string ......

    cout<<s1<<endl<<endl;

    char s2[6]={'a','B','c','D','e','\0'};

    cout<<s2<<endl<<endl;

    char s3[]={'A','C','D','\0'};

    cout<<s3<<endl<<endl;

    char s4[]="Yeasin Arafat";
    cout<<s4<<endl<<endl;

    char s5[]="Name : Yeasin Arafat \
        Age : 23";                          // line break character ......
    cout<<s5 <<endl;


    // Different ways of string declaration .......


    string str1(10,'T');    // For repeate a character ......

    cout << endl << str1 << endl << endl;

    string str2 = "It is a string.";
    cout << str2;


    return 0;
}