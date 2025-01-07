//***********************************************   break   *******************************************



//  "break" statement is used to break loop or switch statement

//  It breaks the current flow of the program at specified condition

//  In case of inner loop, it breaks only inner loop.
//  In case of outter loop, it breaks the outter loop.

/*

For example:

for(int i=1; i<=12; i++)
{
    for(int j=1; j<=12; j++)
    {
        cout<<"inner loop";
        break;---------------->>>>  terminate the loop.this will break only the inner loop....
    }
}

*/




//**********************************************    continue    *******************************************


//  "continue" statement skips the current iteration of a loop
//  It only used in loop.It can't be used in switch



/*

For example:

for(int i=1; i<=100; i++)
{
    if(i==10)
    {
       continue;--------------->> bypass
    }
    cout<<i<<endl;
}

************************    output will be 

1
2
3
4
5
6
7
8
9
11      **10 missing
12
....
....
100



*/