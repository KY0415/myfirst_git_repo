#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the number of rows: ";
    cin>>m;
    cout<<"Enter the number of cloumns: ";
    cin>>n;

    int array1[m][n];

    cout<<endl<<"Enter the values of matrix A:"<<endl;

    // input of matrix A
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"] = ";
            cin>>array1[i][j];
        }
        cout<<endl;
    }

    int array2[m][n];

    cout<<endl<<"Enter the values of matrix B:"<<endl;

    // input of mattix B
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<"B["<<i<<"]["<<j<<"] = ";
            cin>>array2[i][j];
        }
        cout<<endl;
    }



    // output of matrix A
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


    // output of matrix B
    cout<<endl<<endl<<endl<<"B = ";

    for(int i=0; i<m; i++)
    {
        cout<<"\t";
        for(int j=0; j<n; j++)
        {
            cout<<array2[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }


    // Addition of the matrix A & B--->>
    int array3[m][n];

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            array3[i][j] = array1[i][j] + array2[i][j];
        }
    }


    cout<<endl<<endl<<endl<<"A+B = ";

    for(int i=0; i<m; i++)
    {
        cout<<"\t";
        for(int j=0; j<n; j++)
        {
            cout<<array3[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }


    // Subtraction of the matrix A & B--->>

    int array4[m][n];

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            array4[i][j] = array1[i][j] - array2[i][j];
        }
    }


    cout<<endl<<endl<<endl<<"A-B = ";

    for(int i=0; i<m; i++)
    {
        cout<<"\t";
        for(int j=0; j<n; j++)
        {
            cout<<array4[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }

    
    return 0;
}