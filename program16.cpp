/*  Write a C++ Program To Find The Address Of Variable */
#include <iostream>
using namespace std;
int main()
{

    int variable;
    cout << "enter the variable:";
    cin >> variable;
    cout << "address of the variable is:" << &variable;
    return (0);
}