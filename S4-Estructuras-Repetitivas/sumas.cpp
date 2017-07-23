#include <iostream>

using namespace std;

int main(){
    /** EJERCICIO 3 **/
    /**
        Escriba un programa que lea varios valores hasta ingresar
        un valor negativo. Luego muestre la suma de estos.
    **/
    float numero, suma = 0;
    do{
        cout << "Numero:\t";
        cin >> numero;
        if(numero >= 0)
            suma += numero;
    }while(numero >= 0);
    cout << "Suma: " << suma<< endl;
    return 0;
}
