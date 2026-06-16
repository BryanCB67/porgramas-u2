#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operacion;

    cout << "=== CALCULADORA SIMPLE ===" << endl;

    // Solicitar al usuario los números y la operación
    cout << "Ingresa el primer numero: ";
    cin >> num1;

    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    cout << "Selecciona la operacion (+, -, *, /): ";
    cin >> operacion;

    // Realizar la operación seleccionada
    switch (operacion) {
        case '+':
            cout << "Resultado: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Resultado: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Resultado: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Resultado: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division por cero no es permitida." << endl;
            }
            break;
        default:
            cout << "Operacion no valida. Por favor selecciona una operacion correcta." << endl;
    }

    cout <<"===" << endl;

    return 0;
}