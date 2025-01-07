#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        char name[20];
        gets(name);
        cout << name << endl;
    }
}