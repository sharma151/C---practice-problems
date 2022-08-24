/*Write a C++ Program To Find Character Is Vowel Or Not Using If/Else Statements */
#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "enter a character";
    cin >> &c;
    if (c == 'a' || c == 'e' || c == 'i' || c == '0' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        cout << " entered character is vowel ";
    }
    else
    {
        cout << "it is a consonent";
    }

    return (0);
}