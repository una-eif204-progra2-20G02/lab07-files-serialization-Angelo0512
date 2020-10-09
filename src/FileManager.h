//
// Created by Angelo on 8/10/2020.
//

#ifndef MY_PROJECT_NAME_FILEMANAGER_H
#define MY_PROJECT_NAME_FILEMANAGER_H

#include "ISaveFile.h"

class FileManager {
public:
    static void serialize(ISaveFile*, const VectorPerson&);
};


#endif //MY_PROJECT_NAME_FILEMANAGER_H
