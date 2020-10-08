//
// Created by Angelo on 8/10/2020.
//

#include "VectorPersona.h"
#include<iostream>

int main(){
    VectorPersona vector;

    Persona persona1 = Persona(11,20,"Angelo");
    Persona persona2 = Persona(22,19,"Ariadna");
    Persona persona3 = Persona(33,18,"Santiago");
    vector.agregarPersona(persona1);
    vector.agregarPersona(persona2);
    vector.agregarPersona(persona3);
    std::cout << vector;

    try{
        std::cout << vector.obtenerPersona(9) << std::endl;
    }
    catch(std::exception& e) {
        std::cout << "Posicion no valida" << std::endl;
    }
    return 0;

};