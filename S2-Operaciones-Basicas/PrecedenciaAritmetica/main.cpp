#include <iostream>

using namespace std;

int main()
{
    /** PRECEDENCIA ARITM�TICA **/
    /**
        1. Operaciones entre par�ntesis
        2. Multiplicaci�n, divisi�n y m�dulo
        3. Suma y resta
    **/
    cout << 14-8/2*3+1 << endl;     /**  3 **/
    cout << (14-8)/2*3+1 << endl;   /** 10 **/
    cout << 14-(8/2*3)+1 << endl;   /**  3 **/
    cout << 14-8/2*(3+1) << endl;   /** -2 **/
    cout << (14-8)/2*(3+1) << endl; /** 12 **/
    return 0;
}
