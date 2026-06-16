#include <iostream>

using namespace std;

int main() {
    // Declaración de variables para las calificaciones
    float trabajos, portafolio, examen, calificacionFinal;

    cout << "=== CALCULADORA DE CALIFICACIONES ===" << endl;

    // Solicitar al usuario las calificaciones (escala 0 - 100)
    cout << "Ingresa la calificacion de Trabajos en clase (0-100): ";
    cin >> trabajos;
    
    cout << "Ingresa la calificacion del Portafolio (0-100): ";
    cin >> portafolio;
    
    cout << "Ingresa la calificacion del Examen (0-100): ";
    cin >> examen;

    // Calcular la calificación final aplicando los porcentajes
    // Trabajos (30%), Portafolio (30%), Examen (40%)
    calificacionFinal = (trabajos * 0.30) + (portafolio * 0.30) + (examen * 0.40);

    cout << "Calificacion Final: " << calificacionFinal << "/100" << endl;

    // Evaluar la calificación final usando if y else if
    if (calificacionFinal >= 90) {
        cout << "Estado: APROBADO (Excelente)" << endl;
    } 
    else if (calificacionFinal >= 80) {
        cout << "Estado: APROBADO (Muy Bueno)" << endl;
    } 
    else if (calificacionFinal >= 70) {
        cout << "Estado: APROBADO (Bueno)" << endl;
    } 
    else if (calificacionFinal >= 60) {
        cout << "Estado: APROBADO (Suficiente)" << endl;
    } 
    else {
        // Cualquier calificación menor a 60 cae en este bloque
        cout << "Estado: REPROBADO" << endl;
    }

    cout <<"=====================================" << endl;

    return 0;
}