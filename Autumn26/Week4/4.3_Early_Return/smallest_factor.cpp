#include <iostream>

int smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){

        if( (n % cf) == 0){ // n can be divided by cf...
            return cf;
            //...it means we have found a factor!
        }

    }
    // No factor found
    return 0;
}

int main(){
    int n, factor;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;

    factor = smallest_factor(n);
    if (factor == 0){
        std::cout << "n is prime" << std::endl;
    }
    else{
        std::cout << "The smallest factor of n is " << factor << std::endl;
    }
}