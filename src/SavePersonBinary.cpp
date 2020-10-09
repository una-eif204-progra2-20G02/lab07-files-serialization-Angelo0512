//
// Created by Angelo on 8/10/2020.
//

#include "SavePersonBinary.h"


void SavePersonBinary::save(VectorPerson vectorPer) {
    std::ofstream file;

    try{
        file.open("PersonBinaryFile.txt", std::ios::app | std::ios::binary);
    }
    catch(std::ifstream::failure& a){
        throw std::exception();
    }

    for(int i = 0; i < vectorPer.getSize(); i++){
        Person person = vectorPer.getPerson(i);
        file.write((char *) &person, sizeof(Person));
    }
    file.close();
}
