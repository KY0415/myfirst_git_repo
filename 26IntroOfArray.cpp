/*

Array is a collection of variables of same data type.

int mark[100]
float mark[100]
double mark[100]
char name[100]

*/


#include<iostream>
using namespace std;
int main()
{

     //1st type declaration,initialization & Output
    int mark[4];

    mark[0]=12;
    mark[1]=34;
    mark[2]=23;
    mark[3]=3;
    mark[4]=76;

    cout<<mark[0]<<endl<<mark[1]<<endl<<mark[2]<<endl<<mark[3]<<endl<<mark[4]<<endl<<endl<<endl;


    //2nd type declaration,initialization & Output(using loop)

    int result[4]={21,34,45,76};

    int roll[]={01,02,03,04,05,06,07};

    for(int i=0;i<=3;i++)
    {
        cout<<"Result: "<<result[i]<<endl;
    }

    cout<<endl<<endl;

    for(int j=0;j<7;j++)
    {
        cout<<"Roll: "<<roll[j]<<endl;
    }

    return 0;
}