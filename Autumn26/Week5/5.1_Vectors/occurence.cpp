#include <iostream>
#include <vector>

int main(){
    int n,s,count = 0, temp;
    std::vector<int> v, v1;
    std::cout << "Please enter n: " << std::endl;
    std::cin >> n;
    for (int i=0; i<n; i++){
        std::cout << "Please enter a number: " << std::endl;
        std::cin >> temp;
        v.push_back(temp);    
    }
    std::cout << "Please enter s: "<< std::endl;
    std::cin >>s;
    for (int i = 0; i<n ; i++){
        if (v[i] == s){
            v1.push_back(i);
        }
    }
    std::cout << "There are " << v1.size() << " occurences of " << s << " at indices: " << std::endl;
    for (int i=0; i<v1.size();i++){
        std::cout << v1[i] <<std::endl;
    }
}