#include <iostream>
#include <string>
#include "CApp.h"

static void send_help()
{
    std::cerr << "USAGE: ./node-path <node file path>" << std::endl;
}

int main(int argc, char **argv)
{
    if (argc < 2) {
        send_help();
        return 1;
    }

    std::string file_path(argv[1]);

    CApp app;
    return app.run(file_path);
}
