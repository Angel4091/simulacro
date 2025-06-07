#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    int arreglo[n];  // Arreglo para guardar los números
    int pares = 0, impares = 0;

    // Ingresar los números en el arreglo
    cout << "Ingrese los " << n << " numeros:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arreglo[i];
    }

    // Contar pares e impares
    int i = 0;
    while (i < n) {
        if (arreglo[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
        i++;
    }

    // Mostrar resultados
    cout << "Cantidad de numeros pares: " << pares << endl;
    cout << "Cantidad de numeros impares: " << impares << endl;

    return 0;
}