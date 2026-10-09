#include <iostream>

int main(){
    double n, avg = 0;
    int i = 0;

    std::cout << "Enter a number: " << std::endl;

    std::cin >> n;

    while(n != 0){
        avg = ((avg * i) + n )/ (i+1);
        std::cout << "the average so far is: " << avg << std::endl;
        std::cout << "Enter a number: " << std::endl;
        std::cin >> n;
        i += 1;
    }
}