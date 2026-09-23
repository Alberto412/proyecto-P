//
// Created by alberto on 20/8/26.
//

#include "Galaxia.h"

void Galaxia::agregarPlaneta(const std::string &nombre, Posicion posicion) {
    planetas.emplace_back(nombre,posicion);
}
const std::vector<Planeta>& Galaxia::getPlanetas() const {
    return planetas;
}

Galaxia::Galaxia(int ancho , int alto ):ancho(ancho),alto(alto) {
}
bool Galaxia::estaOcupada(Posicion posicion) const {
    for (const Planeta& p : planetas) {
        Posicion posicionP = p.getPosicion();

        if (posicion.x == posicionP.x &&
            posicion.y == posicionP.y) {
            return true;
        }
    }

    return false;
}
int Galaxia::getAlto()const{
    return alto;
}

int Galaxia::getAncho() const {
    return ancho;
}
