#include<iostream>
using namespace std;
int main()
{
    int num[100],n,sum=0,avg;
    cout<<"How many numbers: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>num[i];
        sum=sum+num[i];
    }

    cout<<"Sum = "<<sum;
    cout<<endl;
    cout<<"Average = "<<(float)sum/n;   //type casting

    return 0;
}


