#include <iostream>
using namespace std;

int main(){
    float kwh, multi;

    cout << "Ingrese cuantos khw consumio? " << endl;
    cin >> kwh;

    if (kwh <= 100)
    {
        multi = kwh * 2.5;
        cout << "Su tarifa es baja de $" << multi << endl;
    }else if (kwh >= 101 && kwh <= 200)
    {
        multi = kwh * 2.5;
        cout << "Su tarifa es media de $" << multi << endl;
    }else if (kwh > 201)
    {
         multi = kwh * 2.5;
        cout << "Su tarifa es alta de $" << multi << endl;
    }
    
    
    return 0;
}