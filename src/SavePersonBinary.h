//
// Created by Angelo on 8/10/2020.
//

#ifndef MY_PROJECT_NAME_SAVEPERSONBINARY_H
#define MY_PROJECT_NAME_SAVEPERSONBINARY_H

#include "ISaveFile.h"
#include <fstream>

class SavePersonBinary : public ISaveFile {
public:
    ~SavePersonBinary() override = default;

    void save(VectorPerson) override;
};


#endif //MY_PROJECT_NAME_SAVEPERSONBINARY_H
