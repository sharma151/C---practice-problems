/* Write a C++ Program For Converting Temperature Celsius Into Fahrenheit*/
#include <iostream>
using namespace std;
int main()
{
    float celsius, fahrenheit;
    cout << "enter the temperature °C to be converted  into  °F  (fahrenheit)  ";
    cin >> celsius;
    fahrenheit = (celsius * 9 / 5) + 32;
    // celsius= (fahrenheit - 32 ) * 5 / 9; for fahrenheit to celsius conversion.
    cout << "temperature in fahrenheit :" << fahrenheit << "°F";
}
