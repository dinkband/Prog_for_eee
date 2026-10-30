#include <iostream>
#include <vector>

int main(){
    int n, t, temp;
    std::vector<int> v;
    std::cout << "Give value for n:" << std::endl;
    std::cin >> n;
    std::cout << "Give " << n << " numbers: " << std::endl;
    for (int i = 0; i < n; i++){
        std::cin >> temp;
        v.push_back(temp);
    }
    std::cout << "Give a number t: " << std::endl;
    std::cin >> t;
    std::cout << "The numbers smaller than t are: " << std::endl;
    for (int i = 0; i < n; i++){
        if (v.at(i) < t){
            std::cout << v[i] << std::endl;
        }
    }
}