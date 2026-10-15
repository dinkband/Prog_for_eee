#include <iostream>

int main(){
    int n, temp = 1;
    
    std::cout<< "Input n:" << std::endl;
    std::cin >> n;

    for (int i = 1; i <= n; i++){
        temp *= i;
    }
    std::cout << n << "! is " << temp << std::endl;

}