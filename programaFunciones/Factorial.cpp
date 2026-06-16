#include <iostream>

using namespace std;

int main() {
    int n;
    long long factorial = 1; // Usamos long long para evitar desbordamientos con números grandes

    cout << "Introduce un numero entero positivo: ";
    cin >> n;

    while (n < 0) {
        cout << "El factorial  para numeros negativos no esta definido." << endl;
        cout << "Introduce un numero entero positivo: ";
        cin >> n;
    }
    if (n == 0) {
        factorial = 1;
    } else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i; // Esto es equivalente a: factorial = factorial * i;
        }
        cout << "El factorial de " << n << " es: " << factorial << endl;
    }

    return 0;
}
