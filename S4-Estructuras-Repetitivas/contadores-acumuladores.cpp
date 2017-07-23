#include <iostream>

using namespace std;

int main(){
    /** CONTADORES Y ACUMULADORES **/
    int contador = 0, acumulador = 0;
    while(contador <= 10){
        cout << contador << endl;
        contador++;
        acumulador += contador;
    }
    cout << "Contador: " << contador << endl;
    cout << "El valor del acumulador es: " << acumulador << endl;
    return 0;
}
