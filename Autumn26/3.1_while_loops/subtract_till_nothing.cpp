#include <iostream>

int main(){
    int n1, n2, quotient = 0;

    std::cout << "Enter a number: " << std::endl;

    std::cin >> n1;

    std::cout << "Enter a second number to divide the first: " << std::endl;

    std::cin >> n2;
    
    std::cout << "We want to perform integer division of " << n1 << " by " << n2 << std::endl << std::endl; 
    
    while(n1 > n2){
        std::cout << n1 << " is greater than " << n2 << " so we subtract " << n2 << " from " << n1 << std::endl;
        n1 -= n2;
        std::cout << "We get: " << n1 << std::endl << std::endl;
        
        quotient += 1;
    }
    std::cout << n1 << " is not greater than " << n2 << " so we terminate the loop" << std::endl << std::endl;
    std::cout << "The quotient is " << quotient << std::endl;
    std::cout << "The remainder is " << n1 << std::endl;
}