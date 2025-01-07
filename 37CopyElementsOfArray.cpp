#include<iostream>
using namespace std;
int main()
{
    int array1[]={23, 25, 28, 19, 30};
    int array2[5];

    cout<<"Array 1 :  ";

    for(int i = 0; i < 5; i++)
    {
        cout<<array1[i]<<"  ";
    }

    cout<<endl;
    cout<<"Array 2 :  ";

    for(int i = 0; i < 5; i++)
    {
        array2[i]=array1[i];
        cout<<array2[i]<<"  ";
    }
    return 0;
}

