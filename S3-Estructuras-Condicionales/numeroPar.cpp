#include <iostream>

using namespace std;

int main(){
    /** EJERCICIO 1 **/
    /**
        Escriba un programa que diga si un número entero ingresado
        es par o impar.
    **/
    int numero;
    cout << "Ingresa un numero entero: ";
    cin >> numero;
    if(numero % 2 == 0)
        cout << "El numero es par." << endl;
    else
        cout << "El numero es impar." << endl;
    return 0;
}
