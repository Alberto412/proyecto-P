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

Galaxia GeneradorSandbox::generar(int ancho, int alto, int cantidadPlanetas) {
    Galaxia galaxia(ancho,alto);
    std::vector<Posicion> posiciones = crearPosicionesDisponibles(ancho,alto);
    for (int i=0; i<cantidadPlanetas && i<posiciones.size();i++) {
        Posicion posicion= posiciones[i];
        std::string nombre= "planeta "+std::to_string(i+1);
        galaxia.agregarPlaneta(nombre,posicion);
    }
    return galaxia;
}
