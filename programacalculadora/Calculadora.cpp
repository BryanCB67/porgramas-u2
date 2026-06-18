#include <stdio.h> // Libreria para entrada y salida estandar de datos por consola

int main() {
    double num1, num2; // Variables decimales para soportar operaciones con punto flotante
    char operacion; // Variable tipo caracter para guardar el simbolo matematico

    printf("=== CALCULADORA SIMPLE ===\n");

    // Solicitar el primer valor numerico al usuario
    printf("Ingresa el primer numero: ");
    scanf("%lf", &num1); // El especificador lf lee variables de tipo double

    // Solicitar el segundo valor numerico al usuario
    printf("Ingresa el segundo numero: ");
    scanf("%lf", &num2);

    // Solicitar el operador para decidir que bloque ejecutar
    printf("Selecciona la operacion (+, -, *, /): ");
    scanf(" %c", &operacion); // El espacio antes de por ciento c limpia el buffer del teclado

    // Evalua el caracter ingresado para saltar directamente al caso correspondiente
    switch (operacion) {
        case '+':
            printf("Resultado: %f\n", num1 + num2);
            break; // Rompe la ejecucion del switch para evitar que caiga en los siguientes casos
        case '-':
            printf("Resultado: %f\n", num1 - num2);
            break;
        case '*':
            printf("Resultado: %f\n", num1 * num2);
            break;
        case '/':
            // Validacion obligatoria para evitar un fallo logico en el sistema
            if (num2 != 0) {
                printf("Resultado: %f\n", num1 / num2);
            } else {
                printf("Error: Division por cero no es permitida\n");
            }
            break;
        default:
            // Mensaje de control por si el usuario ingresa un simbolo diferente
            printf("Operacion no valida Por favor selecciona una operacion correcta\n");
    }

    printf("===\n");

    return 0; // Retorno de codigo limpio al sistema operativo
}
