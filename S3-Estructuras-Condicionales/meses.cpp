#include <iostream>

using namespace std;

int main(){
    /** EJERCICIO 4 **/
    /**
        Construya un programa que ingresando un n�mero del
        1 al 12, muestre el mes correspondiente
    **/
    int mes;
    cout << "Ingrese un numero: ";
    cin >> mes;
    switch(mes){
        case 1: cout << "Enero." << endl; break;
        case 2: cout << "Febrero." << endl; break;
        case 3: cout << "Marzo." << endl; break;
        case 4: cout << "Abril." << endl; break;
        case 5: cout << "Mayo." << endl; break;
        case 6: cout << "Junio." << endl; break;
        case 7: cout << "Julio." << endl; break;
        case 8: cout << "Agosto." << endl; break;
        case 9: cout << "Septiembre." << endl; break;
        case 10: cout << "Octubre." << endl; break;
        case 11: cout << "Noviembre." << endl; break;
        case 12: cout << "Diciembre." << endl; break;
        default: cout << "No hay, no existe :v" << endl;
    }
    return 0;
}
