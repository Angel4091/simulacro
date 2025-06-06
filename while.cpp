#include <iostream>
using namespace std;

int main (void){
    int n1;
    cout << "Ingrese un numero del 0 al 10" << endl;
    cin >> n1;

    while (0 >= n1 || 10 <= n1)
    {
        cout << "Lo siento vuelva a intentarlo " << endl;
        cin >> n1;
    }
    cout << "GRACIAS" << endl;

    return 0;
}