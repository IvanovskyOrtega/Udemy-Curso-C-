#include <iostream>

using namespace std;

int main(){
    /** ÁMBITO DE UNA VARIABLE **/
    int i = 100;
    cout << i << endl;
    for(int i = 1 ; i <= 10 ; i++){
        cout << i << endl;  /** Busca el ámbito mas cercano **/
        if(true){ /** Nuevo ámbito **/
            int i = -1; /** Variable local **/
            cout << i << endl;
        }
    }
    /**
        Enmascaramiento de una variable:
            Ocurre cuando una variable con el mismo nombre
            remplaza por ámbito a otra.
    **/
    return 0;
}
