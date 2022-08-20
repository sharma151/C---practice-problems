/* Write a C++ Program For Calculate Percentage Of 5 Subjects*/
#include <iostream>
using namespace std;
int main()
{
    int maths, english, physics, social, chemistry, percentage;
    cout << "enter the marks of maths, english, physics, social, chemistry:";
    cin >> maths >> english >> physics >> social >> chemistry;
    percentage = (maths + english + physics + social + chemistry) / 5;
    cout << "percentage of the following subjects are:" << percentage << "%";
}