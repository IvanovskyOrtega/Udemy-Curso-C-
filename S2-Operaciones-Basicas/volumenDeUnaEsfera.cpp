#include <iostream>
#include <cmath>

using namespace std;

int main(){
    /** EJERCICIO 2: **/
    /**
        Escriba un programa que calcule el
        volumen de una esfera.
        V = (4/3)*PI*(r^3)
    **/
    double radio, volumen;
    const double PI = 3.14159;
    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;
    volumen = (4.0/3.0)*PI*pow(radio,3);
    cout << "El volumen de la esfera es: " << volumen << endl;
    return 0;
}
