#include<iostream>
#include<string>
using namespace std;
int main()
{
    // Lenght or size of a string....

    // There are tow typer of function to determine the length or size of a string....

    // """lenght()"""       or         """size()"""


    string txt ="sintnkdianeifnoLASKDWINDsndksnLASdn";


    cout << endl << "The lenght of the txt string is : " << txt.length();
    cout << endl << "The lenght of the txt string is : " << txt.size();
    

    // string length using loop
    int i = 0, len = 0;
    while(txt[i]!='\0')
    {
        i++;
        len++;
    }
    cout << endl << "The lenght of the txt string is : " << len << endl;


    return 0;
}