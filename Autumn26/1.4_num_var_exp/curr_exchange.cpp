#include <iostream> 

int main(){
    float amt_pounds, rate, amt_euros;

    std::cout << "Pls amount of money in pounds:" << std::endl;
    std::cin >> amt_pounds;

    std::cout << "Pls input pounds to euros exchange rate:" << std::endl;
    std::cin >> rate;

    amt_euros = amt_pounds * rate;
    
    std::cout << amt_pounds << " pounds is equal to " << amt_euros << " euros" << std::endl;

    return 0;
}