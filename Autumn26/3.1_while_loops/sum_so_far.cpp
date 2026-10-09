#include <iostream>

int main(){
    int n, sum = 0;

    std::cout << "Enter a number: " << std::endl;

    std::cin >> n;

    while(n != 0){
        sum += n;
        std::cout << "the sum so far is: " << sum << std::endl;
        std::cout << "Enter a number: " << std::endl;
        std::cin >> n;
    }
}