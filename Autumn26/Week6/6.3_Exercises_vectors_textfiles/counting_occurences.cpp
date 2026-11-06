#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>

int search_text(const std::string& word, const std::vector<std::string>& text){
    int count =0;
    for (int i=0; i < text.size(); i++){
        if (word == text[i]){
            count +=1;
        }

    }
    return count;
}

int main(){

    std::string inputfilename1, inputfilename2;
    // as usual not a special name


    std::cout << "enter name of text input file" << std::endl;
    std::cin >> inputfilename1;
    std::ifstream textfile; 
    textfile.open(inputfilename1);
    if(!textfile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }


    std::cout << "enter name of word input file" << std::endl;
    std::cin >> inputfilename2;
    std::ifstream wordfile; 
    wordfile.open(inputfilename2);
    if(!wordfile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string temp;
    std::vector<std::string> text;
    while (textfile >> temp){
        text.push_back(temp);
    }

    std::vector<std::string> word;
    while (wordfile >> temp){
        word.push_back(temp);
    }

    textfile.close();
    wordfile.close();


    std::ofstream outfile;
    outfile.open("output.txt");
    if(!outfile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<int> count;
    for (int i = 0; i < word.size();i++){
        count.push_back(search_text(word[i], text));
    }

    for (int i = 0; i < word.size(); i++){
        outfile << word[i] << ": " << count[i] <<std::endl;
    }
    outfile.close();

}