#include <iostream>

using namespace std;

int main (){
    /** EJERCICIOO 4 **/
    /**
        Construya un programa que permita convertir una
        temperatura en grados Celsius a Fahrenheit.
        °C = 5*(°F - 32)/9
        y Kelvin
        C = K - 273.15
    **/
    float celsius, farhenheit, kelvin;
    cout << "Celsius: ";
    cin >> celsius;
    farhenheit = (9.0/5.0 * celsius) + 32.0;
    kelvin = celsius + 273.15;
    cout << "Farhenheit: " << farhenheit << endl;
    cout << "Kelvin: " << kelvin << endl;
    return 0;
}
