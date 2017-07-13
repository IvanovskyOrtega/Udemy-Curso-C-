#include <iostream>
#define PI 3.14159

using namespace std;

int main()
{
    const double PI2 = 3.14159;
    cout << PI << endl;
    cout << PI2 << endl;
    /**
        Usar el operador const es mas seguro a la
        hora de definir constantes. Ya que así,
        las constantes se encuentran en modo de solo
        lectura.
    **/
    return 0;
}
