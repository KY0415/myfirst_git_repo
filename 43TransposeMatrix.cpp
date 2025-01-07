#include<iostream>
using namespace std;
int main()
{
    int A[10][10],T[10][10],row,col,i,j;
    cout<<"Enter rows & columns of matrix A : ";
    cin>>row>>col;
    cout<<"Enter the values of the matrix A:"<<endl;

    // input A matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"] = ";
            cin>>A[i][j];
        }
        cout<<endl;
    }

    // print A matrix
    cout<<endl<<"A = ";
    for(i=0; i<row; i++)
    {
        cout<<"\t";
        for(j=0; j<col; j++)
        {
            cout<<A[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }

    // Transpose the matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            T[j][i]=A[i][j];
        }
    }

    // print the transpose matrix
    cout<<endl<<"T = ";
    for(i=0; i<col; i++)
    {
        cout<<"\t";
        for(j=0; j<row; j++)
        {
            cout<<T[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }

    return 0;
}