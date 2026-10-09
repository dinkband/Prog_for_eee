#include <iostream> 

int main(){
    float height, weight, bmi;

    std::cout << "Pls input your height in metres:" << std::endl;
    std::cin >> height;

    std::cout << "Pls input your weight in kilograms:" << std::endl;
    std::cin >> weight;

    bmi = weight / (height * height);   
    
    std::cout << "Your BMI is: " << bmi << std::endl;

    return 0;
}