#include<iostream>
using namespace std;
int main()
{
    char x;
    cout<<"Enter a character: ";
    cin>>x;
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
    {
        cout<<"Vowel"<<endl;
    }
    else
    {
        cout<<"Consonant"<<endl;
    }
    return 0;


    //toupper && tolower function



    /*
    char x;
    cout<<"Enter a character: ";
    cin>>x;

    x=tolower(x);
    
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
    {
        cout<<"Vowel"<<endl;
    }
    else
    {
        cout<<"Consonant"<<endl;
    }
    return 0;

    */



}