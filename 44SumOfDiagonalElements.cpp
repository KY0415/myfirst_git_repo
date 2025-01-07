#include<iostream>
using namespace std;
int main()
{
    int A[10][10],row,col,i,j,sum=0;
    cout<<"Enter rows & columns of matrix A. Number of rows & columns must be equal : ";
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
    
    // sum of diagonal elements 

    cout<<"Diagonal elements: ";
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(i==j)
            {
                sum=sum+A[i][j];
                cout<<A[i][j]<<"\t";
            }
        }
    }

    cout<<endl<<endl<<"Sum of diagonal elements of this matrix is : "<<sum;

    return 0;
}

