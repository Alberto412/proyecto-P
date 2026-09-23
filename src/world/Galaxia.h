//
// Created by alberto on 20/8/26.
//

#ifndef PROYECTOP_GALAXIA_H
#define PROYECTOP_GALAXIA_H
#include <vector>
#include <string>
#include "world/Planeta.h"
#include "world/Posicion.h"

class Galaxia {
    private:
    //atributos
    std::vector<Planeta>planetas;
    int ancho;
    int alto;
    public:
    //constructor
    Galaxia(int ancho, int alto);
    //metodos
    void agregarPlaneta(const std::string& nombre,Posicion posicion);
    const std::vector<Planeta>& getPlanetas() const;
    bool estaOcupada(Posicion posicion) const;
    //gets
    int getAncho() const;
    int getAlto() const;
};


#endif //PROYECTOP_GALAXIA_H