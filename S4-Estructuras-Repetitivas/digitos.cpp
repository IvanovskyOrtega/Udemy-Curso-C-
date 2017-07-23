#include <iostream>

using namespace std;

int main(){
    /** EJERCICIO 2 **/
    /**
        Escriba un programa que calcule la cantidad de dígitos
        que tiene un número.
    **/
    int numero, digitos = 0;
    cout << "Ingresa un numero: " << endl;
    cin >> numero;
    if(numero == 0)
        digitos = 1;
    else{
        while(numero != 0){
            numero /= 10;
            digitos++;
        }
    }
    cout << "El numero tiene " << digitos << " digitos" << endl;
    return 0;
}
