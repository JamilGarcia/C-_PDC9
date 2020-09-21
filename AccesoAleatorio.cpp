#include <iostream> // acceso_aleratorio.cpp
#include <fstream>
#include <string>
#include <cstdlib>
#include "Contacto.cpp"
#include "MetodosAcceso.cpp"
using namespace std;

int main()
{
    MetodosAcceso *MA; 

    fstream fcont0("contactos.dat", ios::out);
    fcont0.close();
    fstream fcont("contactos.dat", ios::in | ios::out | ios::binary);
    MA->escribir_o_leer(fcont, true);
    cout << "ANTES:" << endl;
    MA->escribir_o_leer(fcont, false);
    cout << endl
         << "CAMBIOS:" << endl;
    MA->cambios(fcont);
    cout << endl
         << "DESPUES:" << endl;
    MA->escribir_o_leer(fcont, false);
}
