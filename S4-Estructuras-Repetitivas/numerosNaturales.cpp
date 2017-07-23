#include <iostream>

using namespace std;

int main(){
    /** EJERCICIO 1 **/
    /**
        Crear un programa que muestre los primeros
        100 números naturales.
    **/
    int i = 1 ;
    cout << "Usando while:" << endl;
    while(i <= 100){
        cout << i << endl;
        i++;
    }
    i = 1; // Reseteo del contador
    cout << "Usando do-while:" << endl;
    do{
        cout << i << endl;
        i++;
    }while(i <= 100);
    i = 1; // Reseteo del contador
    cout << "Usando for:" << endl;
    for( ; i <= 100 ; i++){
        cout << i << endl;
    }
    return 0;
}
