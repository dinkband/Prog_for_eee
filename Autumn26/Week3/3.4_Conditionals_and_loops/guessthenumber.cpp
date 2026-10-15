#include <iostream>

int main(){
    int rangemax, rangemin, n;
    std::string feedback;

    std::cout << "Let me guess your number, what is your higher bound" << std::endl;
    std::cin >> rangemax;
    std::cout << "What is your lower bound" << std::endl;
    std::cin >> rangemin;
    
    while (feedback != "correct"){
        if ((rangemin + 1) == rangemax){
            if (feedback == "higher"){
                n = rangemax;
            }
            else if (feedback == "lower"){
                n = rangemin;
            }
        }
        else{
            n = rangemin + (rangemax - rangemin) / 2;
        }
        std::cout << "Is your number: " << n << std::endl;
        std::cout << "Is it higher, lower or correct" << std::endl;
        std::cin >> feedback;
        if (feedback == "higher"){
            rangemin = n;
        }
        else if (feedback == "lower"){
            rangemax = n;
        }
        

    }
}