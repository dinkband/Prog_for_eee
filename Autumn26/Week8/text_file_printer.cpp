#include <iostream>
#include <fstream>

int main(int argc, char* argv[]){
    std::ifstream infile(argv[1]);

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::string line;

    while (std::getline(infile, line)) {
        std::cout << line << std::endl;
    }
    infile.close();
    return 0;

}
