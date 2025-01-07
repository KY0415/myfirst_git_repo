#include<iostream>
#include<string>    // String header file
using namespace std;
int main()
{

    string x = "fam";
    string y = "ily";

    x.append(y);    // use of append function
    cout << x << endl;

    string Name = "Sadiqul Islam Joy";
    cout << Name <<endl;
    string firstName = "Yeasin", midName = "Arafat",lastName = "Tomal";

    string fullName = firstName + midName + lastName; // Concatenation....(There is no space between first, mid and last name)

    cout << fullName << endl;

    string SS1 = "Fahad ";  // Here, after Fahad there is an space....

    string SS2 = "Abid";

    string SS3 = SS1 + SS2;
    cout << SS3 << endl;

    string S1 = "Md. Mohitur";
    string S2 = "Rahman Rabby";

    string S3 = S1 + " " + S2;  // Concatenation
    cout << S3 <<endl;

    return 0;
}