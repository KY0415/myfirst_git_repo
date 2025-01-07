/*

String built-in functions:

Capacity
s.size() -> returns the size of the string.
s.max_size() -> returns the maximum size that string can hold.
s.capacity() -> returns current available capacity of the string.
s.clear() -> clear the string.
s.empty() -> return true/false if the string is empty.
s.resize() -> change the size of the string.



Element access
S[i] -> access the ith index of the string.
s.at(i) -> access the ith index of the string.
s.back() -> access the last element of the string.
s.front() -> access the first element of the string.



Modifiers
s+= -> append another string.
s.append() -> append another string.
s.push_back() -> add character to the last of the string.
s.pop_back() -> remove the last character of the string.
s= -> assign string.
s.assign() -> assign string.
s.erase() -> erase characters from the string.
s.replace() -> replace a portion of the string.
s.insert() -> insert a portion to a specific position.



Iterators
s.begin() -> pointer to the first element.
s.end() -> pointer to the next element after the last element of the string.

*/


#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1 = "abc";
    string str2 = "abc";

    cout << str2.compare(str1) << endl;
    
    if(str2.compare(str1) == 0)
    {
        cout << "Strings are equal." << endl;
    }

    //  Some functions --------->>>>>>  empty(), erase(), find(), insert(), print all character individually using loop and length() function, creating substring using substr() function, converting a string to an integer using stoi() function, converting integer to string using to_string() function, for sorting lexicographically using built in sort() function....(#include<algorithm>) 
    return 0;
}