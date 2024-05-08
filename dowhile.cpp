#include <iostream>
using namespace std;
int main(){

char opcion, variable = 'A, B, C ';


do
{

    cout << "Menu"<<"\n";
    cout << "A Carne Asada" << "\n";
    cout << "B Pollo"<< "\n";
    cout << "C Cerdo" <<"\n";
    cout << "Seleccione una opcion"<< "\n";
    cin >> opcion;
    cout << "opcion seleccionada "<<opcion<<"\n";

}
while (opcion != variable);
// Poner la condicion andreita//


    return 0;
}