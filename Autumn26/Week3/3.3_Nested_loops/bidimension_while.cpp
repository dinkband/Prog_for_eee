#include <iostream>

int main(){
    int n, c1 = 0, c = 0;
    std::cin >> n;

    while (c < n){

        while (c1 < n){
            std::cout << "*";
            c1++;
        }
        std::cout << std::endl;
        c1 = 0;
        c++;
    }


}