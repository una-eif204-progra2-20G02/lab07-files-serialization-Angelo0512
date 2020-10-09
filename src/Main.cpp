//
// Created by Angelo on 8/10/2020.
//


#include "FileManager.h"
#include "SavePersonBinary.h"
#include "SavePersonJson.h"

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

    ISaveFile* binaryFile = new SavePersonBinary;
    ISaveFile* jsonFile = new SavePersonJson;

    try {
        FileManager::serialize(binaryFile, vector);
    }
    catch(std::exception& e){
        std::cout << "Archivo Binario no encontrado" << std::endl;
    }

    try {
        FileManager::serialize(jsonFile, vector);
    }
    catch(std::exception& e){
        std::cout << "Archivo Json no encontrado" << std::endl;
    }

    return 0;

};