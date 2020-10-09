//
// Created by Angelo on 8/10/2020.
//

#include "SavePersonJson.h"

void SavePersonJson::save(VectorPerson vectorPer) {
    std::vector<json> vectorJson;

    vectorJson.reserve(vectorPer.getSize());

    for(int i = 0; i < vectorPer.getSize(); i++)
        vectorJson.emplace_back(serializePerson(i, vectorPer));

    std::ofstream file;

    try{
        file.open("PersonJsonFile", std::ios::binary);
    }
    catch(std::ifstream::failure& e){
        exit(1);
    }

    file << vectorJson;
    file.close();
}

json SavePersonJson::serializePerson(int pos, VectorPerson vectorPer) {
    json person;

    Person aux = vectorPer.getPerson(pos);
    person["Name"] = aux.getName();
    person["Id"] = aux.getId();
    person["Age"] = aux.getAge();

    return person;
}
