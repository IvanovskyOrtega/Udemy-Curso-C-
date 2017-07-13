#include <iostream>

using namespace std;

int main(){
    /** EJERCICIO 1:  **/
    /**
        Escriba un programa que nos permita
        hallar el área de un triángulo.
    **/
    float base, altura, area;
    cout << "Ingrese el tamanio de la base: " << endl;
    cin >> base;
    cout << "Ingrese el la altura: " << endl;
    cin >> altura;
    area = (base * altura) / 2;
    cout << "El area del triangulo es: " << area << endl;
    return 0;
}
