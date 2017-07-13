#include <iostream>

using namespace std;

int main(){
    /** EJERCICIO 3 **/
    /**
        Escriba un programa que lea 3 notas y escriba el promedio final.
    **/
    float nota1, nota2, nota3, promedio;
    cout << "Ingresa la primer nota: ";
    cin >> nota1;
    cout << "Ingresa la segunda nota: ";
    cin >> nota2;
    cout << "Ingresa la tercer nota: ";
    cin >> nota3;
    promedio = (nota1 + nota2 + nota3)/3;
    cout << "El promedio es: " << promedio << endl;
    return 0;
}
