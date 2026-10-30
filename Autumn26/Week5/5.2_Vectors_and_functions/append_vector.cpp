#include <iostream>
#include <vector>


void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    vout = vin1;
    for (int i=0; i<vin2.size(); i++){
        vout.push_back(vin2[i]);
    }
}

int main(){
    std::vector<int> v1,v2,v;
    int temp ,n1, n2;
    std::cout << "Give me the size of vector 1: " << std::endl;
    std::cin >> n1;
    for (int i = 0; i < n1; i++){
        std::cout << "Input into the vector: " << std::endl;
        std::cin >> temp;
        v1.push_back(temp);
    }
    std::cout << "Give me the size of vector 2: " << std::endl;
    std::cin >> n2;
    for (int i = 0; i < n2; i++){
        std::cout << "Input into the vector: " << std::endl;
        std::cin >> temp;
        v2.push_back(temp);
    }
    append_vectors(v1,v2,v);
    std::cout << "The appended vector is: " << std::endl;
    for (int i = 0; i < v.size(); i++){
        std::cout << v[i] << std::endl;
    }
}