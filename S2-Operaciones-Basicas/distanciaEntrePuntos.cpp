#include <iostream>
#include <cmath>

using namespace std;

int main(){
    /** EJERCICIO 5 **/
    /**
        Calcular la distancia entre dos puntos P1 y P2
        localizados en un plano XY
        distancia = sqrt( (x2-x1)^2 + (y2 - y1)^2 )
    **/
    float x1, x2, y1, y2, distancia;
    cout << "Ingrese la coordenada X de P1: ";
    cin >> x1;
    cout << "Ingrese la coordenada Y de P1: ";
    cin >> y1;
    cout << "Ingrese la coordenada X de P2: ";
    cin >> x2;
    cout << "Ingrese la coordenada Y de P2: ";
    cin >> y2;
    distancia = sqrt( pow(x2 - x1, 2) + pow(y2 - y1, 2) );
    cout << "La distancia entre los puntos es: " << distancia << endl;
    return 0;
}
