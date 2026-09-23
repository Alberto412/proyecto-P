//
// Created by alberto on 28/8/26.
//

#ifndef PROYECTOP_GENERADORSANDBOX_H
#define PROYECTOP_GENERADORSANDBOX_H

#import <vector>
#include "/world/Posicion.h"
class GeneradorSandbox {
private:
    std::vector<Posicion> crearPosicionesDisponibles(int ancho, int alto);


};


#endif //PROYECTOP_GENERADORSANDBOX_H