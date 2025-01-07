#include<iostream>
using namespace std;
int main()
{

    int marks[5],i;

    cout<<"Enter marks: ";
    cin>>marks[0];
    cin>>marks[1];
    cin>>marks[2];
    cin>>marks[3];
    cin>>marks[4];

    for(i=0;i<=4;i++)
    {
        cout<<marks[i]<<endl;
    }

    cout<<"Enter Rolls: ";
    
    int rolls[5],j,k;

    //For taking input
    for(j=0;j<=4;j++)
    {
        cin>>rolls[j];
    }

    //For showing output
    for(k=0;k<=4;k++)
    {
        cout<<rolls[k]<<endl ;
    }

    return 0;

}