#include <iostream>
// No se necesitan otras bibliotecas para este programa, ya que solo se utilizan operaciones básicas de entrada/salida y cálculos simples.
using namespace std;

// Este programa calcula el valor de la función de membresía u(x) para diferentes tipos de funciones (Triangular, Gamma, L, Trapezoidal) basándose en los parámetros ingresados por el usuario.
int main() {
    int opcion_usuario;
    double x, a, b, c, d, m, resultado = 0.0;

// Mostrar el menú de opciones al usuario
    cout << "1. Triangular, 2. Gamma, 3. L, 4. Trapezoidal\n";
    cout << "Elige una funcion (1-4): ";
    cin >> opcion_usuario;

// Solicitar al usuario el valor de x a evaluar
    cout << "Ingrese el valor de x a evaluar: ";
    cin >> x;

// Evaluar la función de membresía según la opción seleccionada por el usuario
    switch (opcion_usuario) {
        case 1: // Triangular
            cout << "Ingrese los parametros a, m, b (separados por espacio): ";
            cin >> a >> m >> b;
            
// La función triangular se define por tres parámetros: a (inicio), m (pico) y b (fin). El valor de u(x) se calcula en función de la posición de x respecto a estos parámetros.
            if (x <= a || x > b) resultado = 0.0;
            else if (x <= m)     resultado = (x - a) / (m - a);
            else                 resultado = (b - x) / (b - m);
            break;

// La función Gamma se define por dos parámetros: a (inicio) y m (pico). El valor de u(x) se calcula en función de la posición de x respecto a estos parámetros.
        case 2: // Gamma
            cout << "Ingrese los parametros a, m (separados por espacio): ";
            cin >> a >> m;
            
// La función Gamma es similar a la función triangular, pero solo tiene una pendiente ascendente. El valor de u(x) se calcula en función de la posición de x respecto a los parámetros a y m.
            if (x <= a)      resultado = 0.0;
            else if (x < m)  resultado = (x - a) / (m - a);
            else             resultado = 1.0;
            break;

// La función L se define por dos parámetros: a (inicio) y m (pico). El valor de u(x) se calcula en función de la posición de x respecto a estos parámetros, pero se invierte la lógica de la función Gamma, ya que se calcula como 1 - Gamma.
        case 3: // Función L (Calculada directamente como 1 - Gamma)
            cout << "Ingrese los parametros a, m (separados por espacio): ";
            cin >> a >> m;
            
// La función L es similar a la función Gamma, pero se calcula como 1 - Gamma. El valor de u(x) se calcula en función de la posición de x respecto a los parámetros a y m, pero se invierte la lógica de la función Gamma.
            if (x <= a)      resultado = 1.0; 
            else if (x < m)  resultado = 1.0 - ((x - a) / (m - a));
            else             resultado = 0.0;
            break;

// La función trapezoidal se define por cuatro parámetros: a (inicio), b (inicio del plato), c (fin del plato) y d (fin). El valor de u(x) se calcula en función de la posición de x respecto a estos parámetros, con una pendiente ascendente, un plato y una pendiente descendente.
        case 4: // Trapezoidal
            cout << "Ingrese los parametros a, b, c, d (separados por espacio): ";
            cin >> a >> b >> c >> d;
            
// La función trapezoidal se define por cuatro parámetros: a (inicio), b (inicio del plato), c (fin del plato) y d (fin). El valor de u(x) se calcula en función de la posición de x respecto a estos parámetros, con una pendiente ascendente, un plato y una pendiente descendente.
            if (x <= a || x > d) resultado = 0.0;
            else if (x <= b)     resultado = (x - a) / (b - a);
            else if (x <= c)     resultado = 1.0;
            else                 resultado = (d - x) / (d - c);
            break;

// Si el usuario ingresa una opción no válida, se muestra un mensaje de error y el programa termina con un código de error.
        default:
            cout << "Opcion no valida.\n";
            return 1; // Termina el programa con código de error
    }

// Mostrar el resultado de la función de membresía u(x) al usuario
    cout << "\nResultado u(x) = " << resultado << endl;

    return 0;
}