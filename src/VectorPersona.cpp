//
// Created by Angelo on 8/10/2020.
//

#include "VectorPersona.h"


VectorPersona::VectorPersona() = default;

VectorPersona::~VectorPersona() {

}

void VectorPersona::agregarPersona(Persona per) {
    Personas.push_back(per);
}

std::ostream &operator<<(std::ostream &os, const VectorPersona &persona) {
    for(const auto & Persona : persona.Personas)
        os << Persona << std::endl;
    return os;
}

Persona VectorPersona::obtenerPersona(int pos) {
    if(pos >= Personas.size() || pos<0)
        throw std::exception();
    return Personas[pos];
}

