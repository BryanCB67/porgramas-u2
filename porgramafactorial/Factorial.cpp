#include <stdio.h> // Libreria estandar para funciones de entrada y salida de datos

int main() {
    int n; // Variable para almacenar el numero que introduce el usuario por teclado
    long long factorial = 1; // Acumulador del producto que usa sesenta y cuatro bits para mitigar desbordamientos rapidos

    // Lectura inicial del dato numerico por consola
    printf("Introduce un numero entero positivo: ");
    scanf("%d", &n);

    // Bucle de validacion que bloquea el avance del programa mientras el valor sea invalido o negativo
    while (n < 0) {
        printf("El factorial para numeros negativos no esta definido.\n");
        printf("Introduce un numero entero positivo: ");
        scanf("%d", &n); // Solicita una nueva entrada para intentar romper el ciclo repetitivo while
    }

    // Evaluacion del caso base matematico donde el factorial de cero siempre es uno
    if (n == 0) {
        factorial = 1;
    } else {
        // Ciclo iterativo que multiplica de forma acumulada desde uno hasta el numero ingresado por el usuario
        for (int i = 1; i <= n; ++i) {
            factorial *= i; // Operacion abreviada de multiplicacion acumulativa para actualizar la variable
        }
    }

    // Muestra el resultado final en la terminal usando el especificador de formato para enteros largos
    printf("El factorial de %d es: %lld\n", n, factorial);

    return 0; // Codigo de retorno estandar que indica al sistema que el programa cerro de forma correcta
}
