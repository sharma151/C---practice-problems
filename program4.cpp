/* Write a C++ Program to Convert a person's name in Abbreviated*/
#include <iostream>
using namespace std;
int main()
{
    char fname[20], mname[20], lname[20];
    cout << "enter your full name";
    cin >> fname >> /* mname >>*/ lname;
    cout << fname[0] << "." /* << mname[0] << "."*/ << lname;
}