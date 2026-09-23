#include <iostream>

#include "world/Posicion.h"
#include "world/Planeta.h"
#include "world/Galaxia.h"

int main() {
    Galaxia galaxia{25,30};
    galaxia.agregarPlaneta("XD",Posicion {5,6});
    galaxia.agregarPlaneta("Astra", Posicion{2, 3});
    galaxia.agregarPlaneta("Fer9i", Posicion{3, 4});

    for (const Planeta& p : galaxia.getPlanetas()) {
        Posicion pos = p.getPosicion();
        std::cout << p.getNombre() <<"--> ("<<pos.x<<", "<<pos.y<<")"<<"\n";
    }
    std::cout << "Galaxia: "
          << galaxia.getAncho()
          << "x"
          << galaxia.getAlto()
          << "\n";
    return 0;
}
