//
// Created by Angelo on 8/10/2020.
//

#include "Persona.h"


Persona::Persona(int id, int edad, const std::string &nombre) : Id(id), edad(edad), nombre(nombre) {}

Persona::~Persona() {

}

int Persona::getId() const {
    return Id;
}

void Persona::setId(int id) {
    Id = id;
}

int Persona::getEdad() const {
    return edad;
}

void Persona::setEdad(int edad) {
    Persona::edad = edad;
}

const std::string &Persona::getNombre() const {
    return nombre;
}

void Persona::setNombre(const std::string &nombre) {
    Persona::nombre = nombre;
}

std::ostream &operator<<(std::ostream &os, const Persona &persona) {
    os << "Id: " << persona.Id << " edad: " << persona.edad << " nombre: " << persona.nombre;
    return os;
}
