#include <iostream> 
using namespace std; 
 
int main(){ 
    char opcion; 
    int  opcion2; 
    string carrito; 
 
 
    do 
    { 
        cout << "Estimado usuario, su tienda Online" << endl; 
        cout << "Para comenzar seleccione una de las siguientes opciones:" << endl; 
        cout << "____________________________________" << endl; 
        cout << "|              TIENDA              |" << endl; 
        cout << "| a. Ver productos disponibles     |" << endl; 
        cout << "| b. Agregar productos             |" << endl; 
        cout << "| c. Ver carrito de compras        |" << endl; 
        cout << "| d. Salir                         |" << endl; 
        cout << "|__________________________________|" << endl; 
        cout << "Opcion: " << endl; 
        cin>>opcion; 
 
        if (opcion == 'a'){ 
            cout<<"Los productos disponibles son:"<<endl; 
            cout<<"1. Camisa Deportiva.   $30.00"<<endl; 
            cout<<"2. Zapatos deportivos. $60.00"<<endl; 
            cout<<"3. Balones de Futbol.  $50.00"<<endl; 
        } 
        else if (opcion == 'b'){ 
            cout<<"Los productos disponibles son:"<<endl; 
            cout<<"1. Camisa Deportiva.   $30.00"<<endl; 
            cout<<"2. Zapatos deportivos. $60.00"<<endl; 
            cout<<"3. Balones de Futbol.  $50.00"<<endl; 
            cout<<"Selecciona uno: "<<endl; 
            cin>>opcion2; 
            switch (opcion2){ 
                case 1: 
                carrito="Camisa"; 
                cout<<"Haz seleccionado Una camisa deportiva"; 
                break; 
 
                case 2: 
                carrito= "Zapatos"; 
                cout<<"Zapatos deportivos se ha añadido a tu carrito"; 
                break; 
 
                case 3: 
                carrito= "Balones"; 
                cout<<"Balones de futbol se ha añadido a tu carrito"; 
                break; 
 
                default: 
 
                break; 
            } 
 
        } 
 
        else if(opcion == 'c'){ 
            cout<<"Usted tiene en su carrito: "<<carrito<<endl; 
 
        } 
 
 
 
 
    } while (opcion != 'd'); 
 
    cout<<"Saliendo..."<<endl; 
 
 
    return 0; 
     
}