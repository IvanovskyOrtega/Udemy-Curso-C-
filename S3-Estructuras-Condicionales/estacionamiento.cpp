#include <iostream>

using namespace std;

int main (){
    /** EJERCICIO 3 **/
    /**
        En un estacionamiento cobran $1.50 por hora o fracción.
        Diseñe un programa que determine cuanto debe pagar un cliente
        por el estacionamiento de su vehículo, conociendo el tiempo de
        estacionamiento en horas y minutos.
    **/
    int horas, minutos;
    float precio = 0.0;
    cout << "Horas: ";
    cin >> horas;
    cout << "Minutos: ";
    cin >> minutos;
    if(minutos > 0)
        horas++;
    precio = horas * 1.50;
    cout << "Debe pagar: " << precio << endl;
    return 0;
}
