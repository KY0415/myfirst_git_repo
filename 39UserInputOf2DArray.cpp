#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout << "Number of rows: ";
    cin >> m;
    cout << "Number of columns: ";
    cin >> n;
    int array[m][n];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> array[i][j];
        }

        cout << endl;
    }

    cout << endl << endl << endl;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << array[i][j] << "\t";
        }

        cout << endl << endl;
    }

    return 0;    
}