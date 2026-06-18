#include <stdio.h> // Libreria para entrada y salida estandar de datos por consola

int main() {
    // Declaracion de variables para almacenar los puntajes de las evaluaciones
    float trabajos, portafolio, examen, calificacionFinal;

    printf("=== CALCULADORA DE CALIFICACIONES ===\n");

    // Solicitar la calificacion de los trabajos del estudiante
    printf("Ingresa la calificacion de Trabajos en clase (0-100): ");
    scanf("%f", &trabajos); // Lee la entrada como valor de punto flotante
    
    // Solicitar el puntaje acumulado en el portafolio de evidencias
    printf("Ingresa la calificacion del Portafolio (0-100): ");
    scanf("%f", &portafolio);
    
    // Solicitar la calificacion obtenida en el examen escrito
    printf("Ingresa la calificacion del Examen (0-100): ");
    scanf("%f", &examen);

    // Operacion matematica para calcular el promedio ponderado segun los criterios
    // Aplica los pesos especificos de treinta por ciento y cuarenta por ciento
    calificacionFinal = (trabajos * 0.30) + (portafolio * 0.30) + (examen * 0.40);

    printf("Calificacion Final: %.2f/100\n", calificacionFinal);

    // Estructura condicional anidada para determinar la letra o estatus del alumno
    if (calificacionFinal >= 90) {
        printf("Estado: APROBADO (Excelente)\n");
    } 
    else if (calificacionFinal >= 80) {
        printf("Estado: APROBADO (Muy Bueno)\n");
    } 
    else if (calificacionFinal >= 70) {
        printf("Estado: APROBADO (Bueno)\n");
    } 
    else if (calificacionFinal >= 60) {
        printf("Estado: APROBADO (Suficiente)\n");
    } 
    else {
        // Bloque de control final para capturar todos los casos menores a sesenta
        printf("Estado: REPROBADO\n");
    }

    printf("=====================================\n");

    return 0; // Finaliza la ejecucion del programa y retorna cero al sistema
}
