#include <iostream>

using namespace std;

int main()
{
    /**TIPO INT**/
    /**
        Peso en Bytes = 4 (varía)
        Nº de valores = 2^32 = 4,294,967,296
        Rango: de -2,147,483,648 a 2,147,483,647
        32 bits
        1 : signo
        31 : valores que puede tomar

        unsigned -> sin signo
        unsigned int -> 2^32
        Rango : de 0 a 4,294,967,295
    **/
    int numero = 0;
    //Imprime el tamaño en bytes del tipo de dato int
    cout << sizeof(int) << endl;
    //Desbordamiento de variable
    unsigned int numero1 = -1;
    cout << numero1 << endl;
    return 0;
}
