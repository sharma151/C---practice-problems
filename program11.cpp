/*Write a C++ Program To Check Number Is Positive Or Negative*/
#include <iostream>
using namespace std;
int main()
{
    float num;
    cout << "enter a number";
    cin >> num;
    if (num > 0)
    {
        cout << "it is a positive number";
    }
    else if (num < 0)
    {
        cout << "it is a negative number";
    }

    return (0);
}