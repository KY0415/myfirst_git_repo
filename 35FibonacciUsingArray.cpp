#include<iostream>
using namespace std;
int main()
{
    cout<<"How many fibonacci numbers: ";
    int range,sum;
    cin>>range;
    int array[range];
    array[0]=0;
    array[1]=1;
    cout<<array[0]<<" "<<array[1]<<" ";

    for(int i = 2; i < range; i++)
    {
        array[i]=array[i-1]+array[i-2];

        cout<<array[i]<<" ";
    }
    return 0;
}