#include <iostream>

using namespace std;

int main(){
    /** EJERCICIO 2 **/
    /**
        Escriba un programa que diga si un número entero ingresado
        es negativo, positivo o neutro.
    **/
    int numero;
    cout << "Ingresa un numero entero: ";
    cin >> numero;
    if(numero > 0)
        cout << "El numero es positivo." << endl;
    else if(numero < 0)
        cout << "El numero es negativo." << endl;
    else
        cout << "El numero es neutro." << endl;
    return 0;
}
