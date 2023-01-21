//
// Created by Robott on 21/01/2023.
//

#include "FileNotFoundException.h"

FileNotFoundException::FileNotFoundException(const char *fileNotFound)
{
    FileNotFoundException::mFileNotFound = fileNotFound;
}

const char *FileNotFoundException::what()
{
    return mFileNotFound;
}
