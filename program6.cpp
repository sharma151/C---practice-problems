/*  Write a C++ Program To Find Greater No. Among given Three Number*/
#include <iostream>
using namespace std;
int main()
{
    int fnum, secnum, thrdnum, greater;
    cout << "enter three number";
    cin >> fnum >> secnum >> thrdnum;
    //using if else
    if (fnum > secnum && fnum > thrdnum)
    {
        cout << " first number is greater";
    }
    else if (secnum > thrdnum)
    {
        cout << " second number is greater";
    }
    else
    {
        cout << "third number is greater";
    }
    //using ternary operator
    greater = (fnum > secnum && fnum > thrdnum) ? fnum : (secnum > thrdnum) ? secnum
                                                                            : thrdnum;
    cout << greater;
}