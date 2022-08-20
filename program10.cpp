/*Write a C++ Program To Display Size Of Different Datatype*/
#include <iostream>
using namespace std;
int main()
{
    int integer;
    float flooat;
    long loong;
    double doouble;
    char character;
    cout << "size of integer is :" << sizeof(integer) << "\n"
         << "size of float is :" << sizeof(flooat) << "\n"
         << "size of long is :" << sizeof(loong) << "\n"
         << "size of double is :" << sizeof(doouble) << "\n"
         << "size of character is :" << sizeof(character);
    return (0);
}