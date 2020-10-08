//
// Created by Angelo on 8/10/2020.
//

#ifndef MY_PROJECT_NAME_PERSONA_H
#define MY_PROJECT_NAME_PERSONA_H

#include<string>
#include <ostream>

class Persona {
public:
    Persona(int id, int edad, const std::string &nombre);
    virtual ~Persona();
    int getId() const;
    void setId(int id);
    int getEdad() const;
    void setEdad(int edad);
    const std::string &getNombre() const;
    void setNombre(const std::string &nombre);

    friend std::ostream &operator<<(std::ostream &os, const Persona &persona);

private:
    int Id;
    int edad;
    std::string nombre;
};


#endif //MY_PROJECT_NAME_PERSONA_H
