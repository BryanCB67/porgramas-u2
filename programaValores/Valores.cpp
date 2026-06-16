#include <iostream>

using namespace std;

int main() {
    int valorinicio, valorfinal; 
    int suma = 0; // Variable para almacenar la suma de los números 

    // Solicitar los datos al usuario
    cout << "Ingrese el valor inicial: ";       
    cin >> valorinicio;

    cout << "Ingrese el valor final: ";        
    cin >> valorfinal;

    // Calcular la suma de los números en el rango
    while (valorinicio <= valorfinal) {
        suma += valorinicio;
        valorinicio++; // Incrementar el valor inicial para avanzar en el rango
    }

    // Mostrar el resultado
    cout << "La suma de los números del " << valorinicio << " al " << valorfinal << " es: " << suma << endl;

    return 0;
}