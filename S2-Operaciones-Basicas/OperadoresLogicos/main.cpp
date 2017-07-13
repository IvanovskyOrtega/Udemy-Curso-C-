#include <iostream>

using namespace std;

int main()
{
    /**OPERADORES LÓGICOS**/
    /**
        && : Y
        || : O
        !  : NO
        == : IGUALDAD
        != : DIFERENTE
        <  : MENOR
        >  : MAYOR
        <= : MENOR IGUAL
        >= : MAYOR IGUAL
    **/
    /**
        Sirven para evaluar operaciones booleanas.
        A diferencia de las operaciones aritméticas,
        las operaciones booleanas de igual peso se evalúan
        de derecha a izquierda.

    **/
    bool r1 = (true && true) || false;
    bool r2 = (5 == 5) || (6 != 2) && !(1 == 1);
    bool r3 = false && true || false;
    bool r4 = (5 < 3) || (3 >= 3) || true;
    bool r5 = ((3 <= 3) && (5 < 5) || false);
    cout << r1 << endl;
    cout << r2 << endl;
    cout << r3 << endl;
    cout << r4 << endl;
    cout << r5 << endl;
    return 0;
}
