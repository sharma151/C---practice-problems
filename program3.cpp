/* Write a C++ Program To Find Area Of Triangle*/
#include <iostream>
using namespace std;
int Areaoftriange(int base, int height);
int main()
{
    int base, height;
    cout << "enter the base and height of the triangle";
    cin >> base >> height;
    cout << "area of triangele is:" << Areaoftriange(base, height) << endl;
}
int Areaoftriange(int base, int height)
{
    int Areaoftriange = 0.5 * base * height;
    return (Areaoftriange);
}