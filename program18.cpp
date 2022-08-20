/*Write a C++ Program To Find Greatest Among Three Numbers*/
#include <iostream>
using namespace std;
int main()
{
    int fnum, secnum, thrdnum, greater;
    cout << "enter three number";
    cin >> fnum >> secnum >> thrdnum;

    //using ternary operator
    greater = (fnum > secnum && fnum > thrdnum) ? fnum : (secnum > thrdnum) ? secnum
                                                                            : thrdnum;

    cout << greater << " is greater ";
    return (0);
}