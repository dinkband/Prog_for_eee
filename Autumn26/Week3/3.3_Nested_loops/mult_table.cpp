#include <iostream>

int main(){
    int n, c1 = 1, c = 1;
    std::cin >> n;

    while (c < n + 1){

        while (c1 < n + 1){
            std::cout << c1 * c << "\t";
            c1++;
        }
        std::cout << std::endl;
        c1 = 1;
        c++;
    }


}