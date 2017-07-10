#include <iostream>

using namespace std;

int main()
{
    /*
        SECUENCIAS DE ESCAPE:
        \n : salto de linea
        \b : retroceso
        \r : retorno de carro
        \t : tabulador
    */
    //Sin secuencias de escape
    cout << "Hola 1" << "Hola 2"<< endl;
    //Usando salto de linea
    cout << "Hola 1\n" << "Hola 2"<< endl;
    //Tambien puede ser
    cout << "Hola 1\nHola 2"<< endl;
    //Usando retroceso
    cout << "Hola 1\b" << "Hola 2"<< endl;
    // Usando retorno de carro
    cout << "Hola 1\r" << "Hola 2" << endl;
    // Para que el retorno de carro sea màs visible
    cout << "Hola 11\r" << "Hola 2" << endl;
    //Simulando el tabulador con espacios
    cout << "Hola 1          " << "Hola 2" << endl;
    //Usando tabulador
    cout << "Hola 1\t\t" << "Hola 2" << endl;
    return 0;
}
