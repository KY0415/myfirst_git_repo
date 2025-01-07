#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;

    int numbers[n],i;

    for(i=0;i<n;i++)
    {
        cin>>numbers[i];
    }

    int max=numbers[0], min=numbers[0];

    for(i=1;i<n;i++)
    {
        if(numbers[i] >= max)
        {
            max=numbers[i];
        }
        if(numbers[i] <= min)
        { 
            min = numbers[i];
        }
    }

    cout<< "Max = " << max << endl << "Min = " << min << endl;

    

   return 0;
}