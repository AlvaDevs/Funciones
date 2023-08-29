//  Nombre: Álvaro José Álvarez Puello
#define _USE MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//  Perimetro del circulo
float perimetroCirculo1 (float radio) {
    float p;
    p = 2 * M_PI * radio;
    
    return p;
}

void perimetroCirculo2 (float radio) {
    float p;
    p = 2 * M_PI * radio;
    
    cout << "El perimetro del circulo 2 es: " << p << endl;
}

float perimetroCirculo3() {
    float p, radio;
    
    cout << "Ingrese el radio 3: ";
    cin >> radio;
    
    p = 2 * M_PI * radio;
    
    return p;
}

void perimetroCirculo4() {
    float p, radio;
    
    cout << "Ingrese el radio 4: ";
    cin >> radio;
    
    p = 2 * M_PI * radio;
    
    cout << "El perimetro del circulo 4 es: " << p << endl;
}


//  Main program
int main() {
    cout << fixed << setprecision(3);
    cout << "Bienvenido al caso de fig. geometricas \nAquí solo calcularemos el perimetro del circulo" << endl;
    
    float r, perimetro;
    
    cout << endl;
    cout << "Ingrese el radio 1: ";
    cin >> r;
    perimetro = perimetroCirculo1(r);
    cout << "El perimetro del circulo 1 es: " << perimetro << endl;
    
    cout << endl;
    cout << "Ingrese el radio 2: ";
    cin >> r;
    perimetroCirculo2(r);
    
    cout << endl;
    perimetro = perimetroCirculo3();
    cout << "El perimetro del circulo 3 es: " << perimetro << endl;
    
    cout << endl;
    perimetroCirculo4();
    
    cout << endl;
    cout << "Fin del programa \nBye!" << endl;

    return 0;
}
