#include <iostream>

using namespace std;

int main(){
    /** ESTRUCTURAS REPETITIVAS **/
    /**
        1. while    : mientras
        2. do while : hacer mientras
    **/
    int numero = 5;
    /** PRECONDICIONAL **/
    while(numero == 6){
        cout << "Ciclo while" << endl;
    }
    /** POSTCONDICIONAL **/
    do{
        cout << "Ciclo do-while" << endl;
    }while(numero == 6);
    return 0;
}
