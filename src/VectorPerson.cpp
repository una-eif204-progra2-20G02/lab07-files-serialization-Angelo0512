//
// Created by Angelo on 8/10/2020.
//

#include "VectorPerson.h"


VectorPerson::VectorPerson() = default;

VectorPerson::~VectorPerson() {

}

void VectorPerson::addPerson(Person per){
    Persons.push_back(per);
}

std::ostream &operator<<(std::ostream &os, const VectorPerson &person) {
    for(const auto & Person : person.Persons)
        os << Person << std::endl;
    return os;
}

Person VectorPerson::getPerson(int pos) {
    if(pos >= Persons.size() || pos<0)
        throw std::exception();
    return Persons[pos];
}

