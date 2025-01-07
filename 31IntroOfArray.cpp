/*

-> Array: An array is a collection of variables of same type...

-> declarations:    data_type array_name[array_size]
-> example: int marks[20]
            float marks[20]
            double marks[20]
            char marks[20]


-> index always starts from 0 (Zero)
-> int marks[5]= marks[0] marks[1] marks[2] marks[3] marks[4]

-> Array initialization:
marks[0]=80;
marks[1]=60;
marks[2]=80;
marks[3]=60;
marks[4]=80;

-> int marks[5] =  {10, 20, 40,  40, 49}
-> int marks[] =  {10, 20, 40,  40, 49}


*/

#include<iostream>
using namespace std;
int main()
{
    int array1[5];

    // Array initialization individually...
    
    array1[0]=1;
    array1[1]=2;
    array1[2]=3;
    array1[3]=4;
    array1[4]=5;

    // Array initialization together...

    int array2[5]={23,24,25,26,27};
    

    int array3[10]={1,2,3,4,5,6,7,8,9,0};


    // Print manually...

    cout<<"Array One = ";

    cout<<array1[0]<<" "<<array1[1]<<" "<<array1[2]<<" "<<array1[3]<<" "<<array1[4]<<" ";

    cout<<endl;

    // Print using loop

    cout<<"Array Two = ";

    for(int i=0; i<5; i++)
    {
        cout<<array2[i]<<" ";
    }

    cout<<endl;

    cout<<"Array Three = ";

    for(int i=0; i<10; i++)
    {
        cout<<array3[i]<<" ";
    }



    return 0;
}