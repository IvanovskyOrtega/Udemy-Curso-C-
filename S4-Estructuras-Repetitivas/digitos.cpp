#include <iostream>

using namespace std;

int main(){
    /** EJERCICIO 2 **/
    /**
        Escriba un programa que calcule la cantidad de d�gitos
        que tiene un n�mero.
    **/
    int numero, digitos = 0;
    cout << "Ingresa un numero: " << endl;
    cin >> numero;
    while(numero != 0){
        numero /= 10;
        digitos++;
    }
    cout << "El numero tiene " << digitos << " digitos" << endl;
    return 0;
}
