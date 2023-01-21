#include <iostream>
#include <string>
#include "CApp.h"
#include "CNode.h"
#include "Exceptions/FileNotFoundException.h"

int CApp::run(std::string& file_path)
{
    try {
        CNode node(file_path);

        node.read();
        node.getHeader();
        node.getNodes();

        return EXIT_SUCCESS;
    } catch (FileNotFoundException& e) {
        std::cerr << "ERROR: file " << e.what() << " not found" << std::endl;

        return EXIT_FAILURE;
    }
}
