#include <iostream>

int main(){
    std::string n;

    std::cin >> n;

    while((n != "Stop") && ( n!= "stop") && (n != "STOP")){
        std::cout << n << std::endl;
        std::cin >> n;
    }
}