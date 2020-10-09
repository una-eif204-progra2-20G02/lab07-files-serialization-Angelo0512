//
// Created by Angelo on 8/10/2020.
//

#ifndef MY_PROJECT_NAME_ISAVEFILE_H
#define MY_PROJECT_NAME_ISAVEFILE_H

#include "VectorPerson.h"

class ISaveFile{
public:
    virtual ~ISaveFile()= default;;

    virtual void save(VectorPerson) = 0;

};

#endif //MY_PROJECT_NAME_ISAVEFILE_H
