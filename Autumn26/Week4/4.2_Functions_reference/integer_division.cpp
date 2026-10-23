#include <iostream>

void division(int a, int b, int& quotient, int& remainder){

    quotient = a / b;
    remainder = a % b;

}

int main(){
    int a, b, quotient, remainder;

    std::cout << "Please input 2 integers:" << std::endl;
    std::cin >> a >> b;

    division(a,b,quotient,remainder);

    std::cout << "When a / b, the quotient is " << quotient << " and the remainder is " << remainder << std::endl;
    
}
