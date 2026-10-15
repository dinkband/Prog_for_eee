#include <iostream>

int main(){
    int n, max, steps = 0;
    std::cin >> n;
    max = n;

    while (n != 1){
        if ( n % 2 == 0){
            n /= 2;
            std::cout << n << " ";
            steps ++;
        }
        else {
            n = 3 * n + 1;
            std::cout << n << " ";
            if (max < n){
                max = n;
            }
            steps ++;
        }
    }
    std::cout << std::endl << "Steps: " << steps << std::endl;
    std::cout << "Max: " << max;
}