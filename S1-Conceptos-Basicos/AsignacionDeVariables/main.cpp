#include <iostream>

using namespace std;

int main()
{

    // DECLARACIÒN DE VARIABLES
    int varInt1, varInt2;
    char varChar1;
    float varFloat1;
    double varDouble1;
    bool varBoolean1;

    // Asignar: Dar valor a algo
    varInt1 = 1;
    // = : Operador de asignacion
    cout << varInt1 << endl;
    // Declaracion y asignacion
    int otraVariable = 32;

    //Asignaciòn de caracteres
    //Siempre entre comillas simples y un solo caracter
    varChar1 = 'V';
    cout << varChar1 << endl;

    //Asignacion de float y double
    varFloat1 = 1.5;
    varDouble1 = 3.1416;

    //Asignacion de bool
    varBoolean1 = true;
    varBoolean1 = false;

    // C++ es un lenguaje sensible a mayusculas y minusculas
    return 0;
}
