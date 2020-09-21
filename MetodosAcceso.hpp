#pragma once
#include <fstream>
#include "Contacto.hpp"
using namespace std;

class MetodosAcceso
{

public:
    void escribir_o_leer(fstream, bool);
    void leer_el_3(fstream, Contacto);
    void escribir_el_3(fstream, Contacto);
    void cambios(fstream); 
};