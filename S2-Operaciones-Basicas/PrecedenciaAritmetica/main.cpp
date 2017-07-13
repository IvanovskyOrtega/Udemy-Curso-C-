#include <iostream>

using namespace std;

int main()
{
    /** PRECEDENCIA ARITMÉTICA **/
    
    /**
        1. Operaciones entre paréntesis
        2. Multiplicación, división y módulo
        3. Suma y resta
    **/
    cout << 14-8/2*3+1 << endl;     /**  3 **/
    cout << (14-8)/2*3+1 << endl;   /** 10 **/
    cout << 14-(8/2*3)+1 << endl;   /**  3 **/
    cout << 14-8/2*(3+1) << endl;   /** -2 **/
    cout << (14-8)/2*(3+1) << endl; /** 12 **/
    /**
        Operaciones con el mismo peso re resuelven de
        izquierda a derecha.
    **/
    return 0;
}
