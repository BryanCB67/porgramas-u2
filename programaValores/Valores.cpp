#include <stdio.h> // Libreria para entrada y salida estandar de datos por consola

int main() {
    int valorinicio, valorfinal; 
    int suma = 0; // Variable para almacenar la suma acumulada de los numeros 
    int inicioOriginal; // Variable de respaldo para guardar el valor inicial antes del bucle

    // Solicitar los datos de rango al usuario
    printf("Ingrese el valor inicial: ");       
    scanf("%d", &valorinicio);

    printf("Ingrese el valor final: ");        
    scanf("%d", &valorfinal);

    // Guardar el numero original para poder mostrarlo correctamente al final del programa
    inicioOriginal = valorinicio;

    // Calcular la suma de los numeros en el rango establecido
    while (valorinicio <= valorfinal) {
        suma += valorinicio; // Agrega el valor actual al acumulador total
        valorinicio++; // Incrementar el valor inicial para avanzar en el rango y evitar un bucle infinito
    }

    // Mostrar el resultado final en la terminal usando las variables de control
    printf("La suma de los numeros del %d al %d es: %d\n", inicioOriginal, valorfinal, suma);

    return 0; // Retorno de codigo exitoso al sistema operativo
}
