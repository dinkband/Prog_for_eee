#include <iostream>

double mypow(double base, int exp){
    double result = 1; 
    // we declare a variable for the result
    // (should it be initialised? to what value?)

    // TODO: use a for loop to implement the repeated multiplication algorithm 
    // so that at the end of the loop variable result contains base^exp
    if (exp >= 0){

        for (int i = 0; i < exp; i++){
            result *= base;
        }
    }
    else{
        for (int i = 0; i > exp; i--){
            result /= base;
        }
    }
    return result;
    // at the end we return the value we computed
    // we *do not print* anything in the function
}

int main(){
    double x, n, sum = 0;

    std::cout << "What is x:" << std::endl;
    std::cin >> x;
    std::cout << "What is n:" << std::endl;
    std::cin >> n;

    for (int i = 1; i <= n; i++){
        sum += mypow(x,i);
    }
    std::cout << sum;
    // we test examples with integer (and non-negative) exponent

}   