//
// Created by Angelo on 8/10/2020.
//

#include "VectorPerson.h"
#include<iostream>

int main(){
    VectorPerson vector;

    Person persona1 = Person(11, 20, "Angelo");
    Person persona2 = Person(22, 19, "Ariadna");
    Person persona3 = Person(33, 18, "Santiago");
    vector.addPerson(persona1);
    vector.addPerson(persona2);
    vector.addPerson(persona3);
    std::cout << vector;

    try{
        std::cout << vector.getPerson(3) << std::endl;
    }
    catch(std::exception& e) {
        std::cout << "Posicion no valida" << std::endl;
    }
    return 0;

};