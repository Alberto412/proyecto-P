//
// Created by alberto on 20/8/26.
//

#ifndef PROYECTOP_PLANETA_H
#define PROYECTOP_PLANETA_H
#include "world/Posicion.h"
#include <string>

class Planeta {
    //atributos
    private:
        std::string nombre;
        Posicion posicion;
    public:
        //contructor
        Planeta(std::string nombre, Posicion posicion);

        //gets
        const std::string& getNombre() const;
         Posicion getPosicion() const;

};


#endif //PROYECTOP_PLANETA_H