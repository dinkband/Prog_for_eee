#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>

void translate(const std::vector<std::string> &vin1, const std::vector<std::string> &vin2, std::vector<std::string>& vout){
    for (int i = 0; i < vin1.size(); i++){
        int is_found = 0;
        for (int j = 0; j < vin2.size()/2 ; j ++){
            if (vin1[i] == vin2[2*j]){
                vout.push_back(vin2[2*j + 1]);
                is_found = 1;
            }
        }
        if (!is_found){
            vout.push_back(vin1[i]);
        }
    }
}

int main(){

    std::string inputfilename1, inputfilename2;
    // as usual not a special name


    std::cout << "enter name of advertisement input file" << std::endl;
    std::cin >> inputfilename1;
    std::ifstream adfile; 
    adfile.open(inputfilename1);
    if(!adfile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }


    std::cout << "enter name of translation input file" << std::endl;
    std::cin >> inputfilename2;
    std::ifstream translatefile; 
    translatefile.open(inputfilename2);
    if(!translatefile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string temp;
    std::vector<std::string> translation;
    while (translatefile >> temp){
        translation.push_back(temp);
    }

    std::vector<std::string> ad;
    while (adfile >> temp){
        ad.push_back(temp);
    }

    translatefile.close();
    adfile.close();

    std::vector<std::string> output;

    std::string outputfilename;
    // as usual not a special name
    std::cout << "enter name of output file" << std::endl;

    std::cin >> outputfilename;

    std::ofstream outfile;
    outfile.open(outputfilename);
    if(!outfile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    translate(ad,translation,output);
    std::cout <<output.size() ;
    for (int i = 0; i < output.size(); i++){
        outfile << output[i] << " ";
    }
    outfile.close();

}