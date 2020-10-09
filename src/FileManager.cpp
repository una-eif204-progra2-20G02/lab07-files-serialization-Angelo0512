//
// Created by Angelo on 8/10/2020.
//

#include "FileManager.h"

void FileManager::serialize(ISaveFile * file, const VectorPerson & vectorPer) {

    file->save(vectorPer);
}
