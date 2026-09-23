//
// Created by alberto on 28/8/26.
//

#include "GeneradorSandbox.h"
std::vector<Posicion> GeneradorSandbox::crearPosicionesDisponibles(
    int ancho,
    int alto) {
    std::vector<Posicion> posiciones;
    for (int y; y< alto;y++) {
        for (int x; x<ancho;x++) {
            posiciones.push_back(Posicion{x,y});
        }
    }
}