#include <string>
#include <iostream>
using namespace std;
int main() {
    string MA, nombre; //Creando variable "caja" para guardar el modelo del auto y nombre del dueño
    int year; //Variable "caja" que guardara el año del auto
    // Inicia sección para guardar los valores en las cajas 
    cout << "Cual es el modelo del auto?" << endl;
    cin >> MA; //En este seccion se tecleara el modelo del auto y sera guardado en la caja MA
    cout << "Cual es el año del auto?" << endl;
    cin >> year;
    cout << "Cual es el nombre del propietario?" << endl;
    cin >> nombre;
    // Termina sección para guardar datos
    // Inicia sección para mostrar los datos que se guardaron
    cout << "El modelo del auto es: " << MA << endl;
    cout << "El año del auto es: " << year << endl;
    cout << "El nombre del dueño es: " << nombre << endl; 
}
