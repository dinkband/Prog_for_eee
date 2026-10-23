#include <iostream>

int max2(int a, int b){
    if (a > b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    std::cout << (max2(45,12) == 45);
    std::cout << (max2(-1,-10) == -1);
}