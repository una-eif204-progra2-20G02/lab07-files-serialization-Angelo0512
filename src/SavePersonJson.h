//
// Created by Angelo on 8/10/2020.
//

#ifndef MY_PROJECT_NAME_SAVEPERSONJSON_H
#define MY_PROJECT_NAME_SAVEPERSONJSON_H

#include "ISaveFile.h"
#include "../lib/nlohmann/json.hpp"
#include <fstream>

using json = nlohmann::json;

class SavePersonJson : public ISaveFile {
public:
    ~SavePersonJson() override = default;

    void save(VectorPerson) override;

    static json serializePerson(int, VectorPerson);
};


#endif //MY_PROJECT_NAME_SAVEPERSONJSON_H
