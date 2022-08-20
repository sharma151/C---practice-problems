/*    Write a C++ Program To Find Area And Circumference Of Circle */
#include <iostream>
#define pie 3.14
using namespace std;
float circumfernce(float radi);
int main()
{
    float radi, circum;
    cout << "enter the radius of circle";
    cin >> radi;

    cout << "circumference of given circle is :" << circumfernce(radi) << endl;
}
float circumfernce(float radi)
{
    float circum = 2 * pie * radi;
    return (circum);
}
