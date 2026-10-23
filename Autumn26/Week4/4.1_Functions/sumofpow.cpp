#include <iostream>
#include <cmath>

int main(){
    int x, n, sum = 0;

    std::cout << "What is x:" << std::endl;
    std::cin >> x;
    std::cout << "What is n:" << std::endl;
    std::cin >> n;

    for (int i = 1; i <= n; i++){
        sum += std::pow(x,i);
    }
    std::cout << sum;
}