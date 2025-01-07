/*
2D Array / Matrix Array

Delcaration------->>>>

data_type array_name[row_size][column_size];

For example

int A[3][4];


Number of elements = rows * columns

3/4



            0           1           2           3

0        A[0][0]     A[0][1]     A[0][2]     A[0][3]

1        A[1][0]     A[1][1]     A[1][2]     A[0][1]

2        A[2][0]     A[2][1]     A[2][2]     A[2][3]


*/ 

#include<iostream>
using namespace std;
int main()
{
    int array[3][4]={{5,6,7,8},{12,13,14,15},{21,22,23,24}};
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << array[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}