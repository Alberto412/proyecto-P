//
// Created by alberto on 28/8/26.
//

#ifndef PROYECTOP_GENERADORSANDBOX_H
#define PROYECTOP_GENERADORSANDBOX_H

#include  <vector>
#include "world/Posicion.h"
#include "world/Galaxia.h"
class GeneradorSandbox {
private:
    std::vector<Posicion> crearPosicionesDisponibles(int ancho, int alto);

public:
    Galaxia generar(int ancho,int largo,int cantidadPlanetas);
};


#endif //PROYECTOP_GENERADORSANDBOX_H