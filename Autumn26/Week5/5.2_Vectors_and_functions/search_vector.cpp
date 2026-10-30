#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    if (vin.size() == 0){
        return -1;
    }
    else {
        for (int i = 0; i < vin.size(); i++){
            if (n == vin[i]){
                return i;
            }
        }
        return -1;
    }
}


int main(){
    std::vector<int> v;
    int s, temp,n;
    std::cout << "Give me the size of the vector: " << std::endl;
    std::cin >> s;
    for (int i = 0; i < s; i++){
        std::cout << "Input into the vector: " << std::endl;
        std::cin >> temp;
        v.push_back(temp);
    }
    std::cout << "Give me a number to search for: " << std::endl;
    std::cin >> n;
    std::cout << "The number you are looking for is at index: " << search_vector(n,v) << std::endl;
}