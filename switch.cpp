#include <iostream>

using namespace std;
int main(void){
    float usd = 1,eur = 0.88,jpy = 144.83,gbp = 0.74,conversion;

    int opcion;
    cout << "Bienvenido a la conversion de monedas"<< endl;
    cout << "Elije una opcion" << endl;
    cout << "1.Eur" << endl;
    cout << "2.Jpy" << endl;
    cout << "3.Gbp" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Cuantos dolares queres convertir a eur?" << endl;
        cin >> usd;
        conversion = usd * eur;
        cout << usd << " dolares es igual a " << conversion << " euros ";
        break;
    case 2:
        cout << "Cuantos dolares queres convertir a jpy?" << endl;
        cin >> usd;
        conversion = usd * jpy;
        cout << usd << " dolares es igual a " << conversion << " yen japones ";
        break;
    case 3:
        cout << "Cuantos dolares queres convertir a gbp?" << endl;
        cin >> usd;
        conversion = usd * gbp;
        cout << usd << " dolares es igual a " << conversion << " libra esterlina ";
        break;
    
    default:
        cout << "Error" << endl;
        break;
    }

}