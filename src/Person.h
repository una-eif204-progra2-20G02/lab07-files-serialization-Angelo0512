//
// Created by Angelo on 8/10/2020.
//

#ifndef MY_PROJECT_NAME_PERSON_H
#define MY_PROJECT_NAME_PERSON_H

#include<string>
#include <ostream>

class Person {
public:
    Person(int id, int age, const std::string &name);
    virtual ~Person();
    int getId() const;
    void setId(int id);
    int getAge() const;
    void setAge(int age);
    const std::string &getName() const;
    void setName(const std::string &name);

    friend std::ostream &operator<<(std::ostream &os, const Person &person);

private:
    int Id;
    int Age;
    std::string Name;
};


#endif //MY_PROJECT_NAME_PERSON_H
