#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the number of rows of matrix A: ";
    cin>>m;
    cout<<"Enter the number of cloumns of matrix A: ";
    cin>>n;

    int array1[m][n];

    cout<<endl<<"Enter the values of matrix A:"<<endl;

    // input of A matrix
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"] = ";
            cin>>array1[i][j];
        }
        cout<<endl;
    }


    // output of A matrix
    cout<<endl<<"A = ";

    for(int i=0; i<m; i++)
    {
        cout<<"\t";
        for(int j=0; j<n; j++)
        {
            cout<<array1[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }

    int o,p;
    cout<<"Enter the number of rows of matrix B: ";
    cin>>o;
    cout<<"Enter the number of cloumns of matrix B: ";
    cin>>p;

    int array2[o][p];

    cout<<endl<<"Enter the values of matrix B:"<<endl;

    // input of B matrix
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<"B["<<i<<"]["<<j<<"] = ";
            cin>>array2[i][j];
        }
        cout<<endl;
    }


    // output of B matrix
    cout<<endl<<"B = ";

    for(int i=0; i<m; i++)
    {
        cout<<"\t";
        for(int j=0; j<n; j++)
        {
            cout<<array2[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }

    return 0;
}