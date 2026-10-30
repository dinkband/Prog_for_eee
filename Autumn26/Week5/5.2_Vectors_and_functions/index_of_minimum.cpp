#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    double smallest_so_far;
    int index;
    if (vin.size() == 0){
        return -1;
    }
    else{
        for (int i = 0; i < vin.size(); i++){
            if (i==0){
                smallest_so_far = vin[i];
                index = i;
            }
            else if (vin[i] < smallest_so_far){
                smallest_so_far = vin[i];
                index = i;
            }
        }
    }
    return index;
}

int main(){
    std::vector<double> v;
    int n, temp;
    std::cout << "Give me the size of the vector: " << std::endl;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::cout << "Input into the vector: " << std::endl;
        std::cin >> temp;
        v.push_back(temp);
    }
    std::cout << "The index of the smallest value is: " << min_vector_element(v) << std::endl;
}


