#include<iostream>
using namespace std;
int main()
{
    int A[10][10],B[10][10],C[10][10],c1,c2,r1,r2,i,j,k,sum=0;

    cout<<"Enter rows & columns for first matrix A : ";
    cin>>r1>>c1;

    cout<<"Enter rows & columns for second matrix B : ";
    cin>>r2>>c2;

    // The main condition of matrix multiplication   (c1==r2)........
    while(c1!=r2)
    {
        cout<<endl<<"ERROR!!!"<<endl<<"Column of first matrix is not equal row of second matrix"<<endl<<endl;


        cout<<"Again, enter rows & columns for first matrix A : ";
        cin>>r1>>c1;

        cout<<"Again, enter rows & columns for second matrix B : ";
        cin>>r2>>c2;
    }

    // taking input for first matrix....
    cout<<endl<<"Enter the values of first matrix A:"<<endl;
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"] = ";
            cin>>A[i][j];
        }
        cout<<endl;
    }

    //taking input for second matrix....
    cout<<"Enter the values of second matrix B:"<<endl;
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            cout<<"B["<<i<<"]["<<j<<"] = ";
            cin>>B[i][j];
        }
        cout<<endl;
    }

    // multiplication......
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum=sum+A[i][k]*B[k][j];
            }
            C[i][j]=sum;
            sum=0;
        }
    }

    // print first matrix...
    cout<<endl<<"A = ";
    for(i=0; i<r1; i++)
    {
        cout<<"\t";
        for(j=0; j<c1; j++)
        {
            cout<<A[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }

    //print second matrix...
    cout<<endl<<endl<<"B = ";
    for(i=0; i<r2; i++)
    {
        cout<<"\t";
        for(j=0; j<c2; j++)
        {
            cout<<B[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }

    // print the result matrix
    cout<<endl<<endl<<"A X B = "<<"\t";
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            cout<<C[i][j]<<"\t";
        }
        
        cout<<endl<<endl;
        cout<<"\t\t";
    }

    return 0;
}