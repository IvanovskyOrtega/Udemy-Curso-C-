#include <iostream>

using namespace std;

int main(){
    /** EJERCICIO 6 **/
    /**
        Ingresar el sueldo de un trabajador, categoría,
        condición estable (E) o no estable (N) y reportar
        el pago total que se le debe de hacer de acuerdo
        a lo siguiente:
        El porcentaje de bonificación con respecto al sueldo
        se calcula con respecto a la siguiente tabla:
        CATEGORÍA   ESTABLE     NO ESTABLE
            A          20%           17%
            B          18%           15%
            C          15%           14%
            D          12%           10%
        El cálculo del descuento es con respecto al sueldo mas
        bonificación:
        Estable: 6%
        No Estable: 4%
    **/
    float sueldo;
    char condicion,categoria;
    cout << "Sueldo: ";
    cin >> sueldo;
    cout << "Condicion: ";
    cin >> condicion;
    cout << "Categoria: ";
    cin >> categoria;
    if(condicion == 'e' || condicion == 'E'){
        switch(categoria){
            case 'A':
            case 'a':
                sueldo += sueldo * .20;
                break;
            case 'B':
            case 'b':
                sueldo += sueldo * .18;
                break;
            case 'C':
            case 'c':
                sueldo += sueldo * .15;
                break;
            case 'D':
            case 'd':
                sueldo += sueldo * .12;
                break;
            default:
                cout << "Categoria invalida." << endl;
        }
        sueldo -= sueldo * .06;
    }
    else if(condicion == 'n' || condicion == 'N'){
        switch(categoria){
            case 'A':
            case 'a':
                sueldo += sueldo * .17;
                break;
            case 'B':
            case 'b':
                sueldo += sueldo * .15;
                break;
            case 'C':
            case 'c':
                sueldo += sueldo * .14;
                break;
            case 'D':
            case 'd':
                sueldo += sueldo * .10;
                break;
            default:
                cout << "Categoria invalida." << endl;
        }
        sueldo -= sueldo * .04;
    }
    cout << "Sueldo final: " << sueldo << endl;
    return 0;
}
