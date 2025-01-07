#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter an integer: ";
    cin>>x;
    if(x%2==0)
    {
        cout<<"It's an even nubmber."<<endl;
    }
    else if(x%2==1)
    {
        cout<<"It's an odd number."<<endl;
    }
    return 0;
}