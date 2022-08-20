/*Write a C++ Program To Find The Gross Salary Of An Employee*/
#include <iostream>
using namespace std;
int main()
{
    int grosspay, basicsal, da, hra, other;
    cout << "enter employee salary , house rental allowance and other allowance";
    cin >> basicsal >> hra >> da >> other;
    grosspay = basicsal + (hra * basicsal / 100) + (da * basicsal / 100) + other;
    cout << "grosspay is " << grosspay;
}