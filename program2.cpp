/* Write a C++ Program To Print Ascii Value Of Character */
#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter a character : ";
    cin >> c;
    cout << "ASCII value of " << c << " is :  " << (int)c;
    return 0;
}