#include "../angelscript/include/angelscript.h"
#include <iostream>
#include <array>
#include <fstream>

int main(int argc, char *argv[]) {
    std::cout<<"angelscript version: "<<ANGELSCRIPT_VERSION_STRING<<std::endl;
    std::cout<<"parameters:"<<std::endl;
    for (int i = 1; i < argc; ++i) {
        std::cout << argv[i] << std::endl;
    }
    
    for (int i = 1; i < argc; ++i) {
        std::cout<<"executing \""<<argv[i]<<"\"!"<<std::endl;

    }
    
    
    return 0;
}