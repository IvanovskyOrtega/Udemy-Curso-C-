#include <iostream>

using namespace std;

int main(){
    /** EJERCICIO 5 **/
    /**
        Construya un programa que identifique si una letra es vocal.
    **/
    char letra;
    cout << "Ingrese una letra: ";
    cin >> letra;
    switch(letra){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            cout << "La letra ingresada es vocal." << endl;
            break;
        default:
            cout << "La letra ingresada no es vocal." << endl;
    }
    return 0;
}
