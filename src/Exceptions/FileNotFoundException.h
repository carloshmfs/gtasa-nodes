//
// Created by Robott on 21/01/2023.
//

#ifndef NODE_PATH_FILENOTFOUNDEXCEPTION_H
#define NODE_PATH_FILENOTFOUNDEXCEPTION_H

#include <iostream>

class FileNotFoundException : public std::exception
{
public:
    FileNotFoundException(const char *fileNotFound);
    const char *what();

private:
    const char *mFileNotFound;
};


#endif //NODE_PATH_FILENOTFOUNDEXCEPTION_H
