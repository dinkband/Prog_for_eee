#include <iostream> 

int main(){
    float celsius, farenheit;

    std::cout << "Pls inputtemperature in celsius:" << std::endl;
    std::cin >> celsius;

    farenheit = 1.8 * celsius + 32;
    
    std::cout << celsius << " degrees celsius is " << farenheit << " degrees farenheit" << std::endl;

    return 0;
}