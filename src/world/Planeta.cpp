//
// Created by alberto on 20/8/26.
//

#include "Planeta.h"


Planeta::Planeta(std::string nombre, Posicion posicion) : nombre (nombre), posicion (posicion) {

    }
const std::string& Planeta::getNombre() const {
    return nombre;
}
Posicion Planeta::getPosicion() const {
    return posicion;
}