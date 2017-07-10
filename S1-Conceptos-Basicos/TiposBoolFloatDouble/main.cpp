#include <iostream>

using namespace std;

int main()
{
    /**TIPO BOOL**/
    /**
        Peso en Bytes = 1
        Nº de valores = 2 (True, False)
        Rango: -
    **/
    /**TIPO FLOAT**/
    /**
        Peso en Bytes = 4
        Rango: 1.17e-38 a 3.40e38
    **/
    /**TIPO Double**/
    /**
        Peso en Bytes = 8
        Rango: 2.22e-308 a 1.80e308
    **/
    cout << "Bool: " << sizeof(bool) << endl;
    cout << "Float: " << sizeof(float) << endl;
    cout << "Double: " << sizeof(double) << endl;
    return 0;
}

