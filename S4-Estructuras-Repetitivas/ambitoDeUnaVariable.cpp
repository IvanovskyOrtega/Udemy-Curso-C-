#include <iostream>

using namespace std;

int main(){
    /** �MBITO DE UNA VARIABLE **/
    int i = 100;
    cout << i << endl;
    for(int i = 1 ; i <= 10 ; i++){
        cout << i << endl;  /** Busca el �mbito mas cercano **/
        if(true){ /** Nuevo �mbito **/
            int i = -1; /** Variable local **/
            cout << i << endl;
        }
    }
    /**
        Enmascaramiento de una variable:
            Ocurre cuando una variable con el mismo nombre
            remplaza por �mbito a otra.
    **/
    return 0;
}
