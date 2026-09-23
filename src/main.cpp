#include <iostream>

#include "world/Posicion.h"
#include "world/Planeta.h"
#include "world/Galaxia.h"
#include "generation/GeneradorSandbox.h"

int main() {
    GeneradorSandbox generador;

    Galaxia galaxia = generador.generar(5, 5, 4);

    std::cout << "Galaxia: "
              << galaxia.getAncho()
              << "x"
              << galaxia.getAlto()
              << "\n";

    for (const Planeta& planeta : galaxia.getPlanetas()) {
        Posicion posicion = planeta.getPosicion();

        std::cout << planeta.getNombre()
                  << " --> ("
                  << posicion.x
                  << ", "
                  << posicion.y
                  << ")\n";
    }

    return 0;
}