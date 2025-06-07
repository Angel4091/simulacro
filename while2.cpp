#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, siguiente, contador = 1;

    cout << "Ingrese la cantidad de términos de la serie Fibonacci: ";
    cin >> n;

    cout << "Serie Fibonacci: ";

    // Imprimimos los primeros dos términos si el número es mayor o igual a 1
    if (n >= 1) cout << a << " ";
    if (n >= 2) cout << b << " ";

    while (contador <= n - 2) {
        siguiente = a + b;
        cout << siguiente << " ";
        a = b;
        b = siguiente;
        contador++;
    }

    cout << endl;
    return 0;
}