#include <iostream>
#include <vector>


void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for (int i =0; i<vin.size(); i++){
        if (vin[i]<t){
            vout.push_back(vin[i]);
        }
    }
}

int main(){
    std::vector<double> vin,vout;
    int s, temp, t;
    std::cout << "Give me the size of the vector: " << std::endl;
    std::cin >> s;
    for (int i = 0; i < s; i++){
        std::cout << "Input into the vector: " << std::endl;
        std::cin >> temp;
        vin.push_back(temp);
    }
    std::cout << "Give me value of t: " << std::endl;
    std::cin >> t;

    filter_v(vin,t,vout);
    std::cout << "The numbers smaller than t are: "<< std::endl;
    for (int i=0; i<vout.size(); i++){
        std::cout << vout[i] <<std::endl;
    }
}