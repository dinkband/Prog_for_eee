#include <iostream>

int main(){

    int x, n, temp;
    std::cout << "Input x:" << std::endl;
    std::cin >> x;
    temp = x;
    std::cout << "Input n:" << std::endl;
    std::cin >> n;

    for(int i=1; i < n; i++){
        temp *= x;
    }
    std::cout << temp;

}