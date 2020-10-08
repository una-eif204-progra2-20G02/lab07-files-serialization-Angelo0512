//
// Created by Angelo on 8/10/2020.
//

#include "Person.h"


Person::Person(int id, int age, const std::string &name) : Id(id), Age(age), Name(name) {}

Person::~Person() {

}

int Person::getId() const {
    return Id;
}

void Person::setId(int id) {
    Id = id;
}

int Person::getAge() const {
    return Age;
}

void Person::setAge(int age) {
    Person::Age = age;
}

const std::string &Person::getName() const {
    return Name;
}

void Person::setName(const std::string &name) {
    Person::Name = name;
}

std::ostream &operator<<(std::ostream &os, const Person &person) {
    os << "Id: " << person.Id << " Age: " << person.Age << " Name: " << person.Name;
    return os;
}
