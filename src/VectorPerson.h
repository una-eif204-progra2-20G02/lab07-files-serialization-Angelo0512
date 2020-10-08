//
// Created by Angelo on 8/10/2020.
//

#ifndef MY_PROJECT_NAME_VECTORPERSON_H
#define MY_PROJECT_NAME_VECTORPERSON_H

#include"Person.h"
#include<sstream>
#include<vector>
#include <ostream>

class VectorPerson {
public:
    VectorPerson();

    virtual ~VectorPerson();

    void addPerson(Person);

    Person getPerson(int);

    friend std::ostream &operator<<(std::ostream &os, const VectorPerson &persona);

private:
    std::vector<Person> Persons;
};


#endif //MY_PROJECT_NAME_VECTORPERSON_H
