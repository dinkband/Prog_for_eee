#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>

int search_vector(std::string s, const std::vector<std::string>& vin){
    for (int i = 0; i < vin.size(); i ++){
        if (s == vin[i]){
            return i;
        }
    }
    return -1;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    vout = vin2;
    for (int i = 0; i < vin1.size(); i++){
        int tmp = search_vector(vin1[i],vin2);
        if (tmp == -1){
            vout.push_back(vin1[i]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for (int i = 0; i < vin1.size(); i++){
        int tmp = search_vector(vin1[i],vin2);
        if (tmp != -1){
            vout.push_back(vin1[i]);
        }
    }
}

int main(){

    std::string inputfilename1, inputfilename2;
    // as usual not a special name


    std::cout << "enter name of first input file" << std::endl;
    std::cin >> inputfilename1;
    std::ifstream infile1; 
    infile1.open(inputfilename1);
    if(!infile1.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }


    std::cout << "enter name of second input file" << std::endl;
    std::cin >> inputfilename2;
    std::ifstream infile2; 
    infile2.open(inputfilename2);
    if(!infile2.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }



    std::vector<std::string> vin1,vin2,vout;
    std::string tmp;
    while (infile1 >> tmp){
        vin1.push_back(tmp);
    }
    while (infile2 >> tmp){
        vin2.push_back(tmp);
    }


    infile1.close(); 
    infile2.close();

    std::ofstream intersection_out, union_out;
    union_out.open("union.txt");
    if(!union_out.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    union_vector(vin1,vin2,vout);
    for (int i = 0; i < vout.size(); i++){
        union_out << vout[i] << std::endl;
    }
    
    union_out.close();
    vout.clear();


    intersection_out.open("intersection.txt");
    if(!intersection_out.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    intersection_vector(vin1,vin2,vout);
    for (int i = 0; i < vout.size(); i++){
        intersection_out << vout[i] << std::endl;
    }
    
    union_out.close();
    vout.clear();
}