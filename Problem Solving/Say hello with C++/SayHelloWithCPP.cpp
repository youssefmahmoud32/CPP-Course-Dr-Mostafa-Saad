// Problem:

//Given a name S. Print "Hello, (name)" without parentheses.

//Input
//Only one line containing a string S.
//
//Output
//Print "Hello, " without quotes, then print name

#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name;
    return 0;
}


