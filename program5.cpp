/*  Write a C++ Program For Calculate A Simple Interest*/
#include <iostream>
using namespace std;
float simpleintrest(float principle, float time, float rate);
int main()
{
    float principle, time, rate;
    cout << "enter principle time and rate to be calculated ";
    cin >> principle >> time >> rate;
    cout << "simple intrest of the given data:" << simpleintrest(principle, time, rate);
}
float simpleintrest(float principle, float time, float rate)
{
    float simpleintrest = principle * time * rate / 100;
    return (simpleintrest);
}