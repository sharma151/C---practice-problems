/* Write a C++ Program To Read Integer (N) And Print First Three Powers (N^1, N^2, N^3)*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a integer number";
    cin >> num;
    cout << "n^1 is : " << num << endl
         << "n^2 is : " << num * num << endl
         << "n^3 is : " << num * num * num << endl;
    return (0);
}