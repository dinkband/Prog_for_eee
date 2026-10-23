#include <iostream>

int max2(int a, int b){
    if (a > b){
        return a;
    }
    else{
        return b;
    }
}

int max3(int a, int b, int c){
    return max2(max2(a,b),c);
}

int main(){
    std::cout << (max3(45,12,65) == 65);
    std::cout << (max3(-1,-10, 2) == 2);
}