//
// Created by alberto on 28/8/26.
//

#include "GeneradorSandbox.h"
std::vector<Posicion> GeneradorSandbox::crearPosicionesDisponibles(
    int ancho,
    int alto) {
    std::vector<Posicion> posiciones;
    for (int y=0; y< alto;y++) {
        for (int x=0; x<ancho;x++) {
            posiciones.push_back(Posicion{x,y});
        }
    }
    return posiciones;
}