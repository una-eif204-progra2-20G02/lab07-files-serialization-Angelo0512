//
// Created by Angelo on 8/10/2020.
//

#ifndef MY_PROJECT_NAME_VECTORPERSONA_H
#define MY_PROJECT_NAME_VECTORPERSONA_H

#include"Persona.h"
#include<sstream>
#include<vector>
#include <ostream>

class VectorPersona {
public:
    VectorPersona();

    virtual ~VectorPersona();

    void agregarPersona(Persona);

    Persona obtenerPersona(int);

    friend std::ostream &operator<<(std::ostream &os, const VectorPersona &persona);

private:
    std::vector<Persona> Personas;
};


#endif //MY_PROJECT_NAME_VECTORPERSONA_H
