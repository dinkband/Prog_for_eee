#include <iostream>

void peri_and_area(int length, int width, int& perimeter, int& area){
    perimeter = 2* length + 2* width;
    area = length * width;
}

int main(){
    int length, width, perimeter, area;
    std::cout << "Enter the length and width of the rectangle:" << std::endl;
    std::cin >> length >> width;

    peri_and_area(length, width, perimeter, area);

    std::cout << "The perimeter is " << perimeter << " and the area is " << area << std::endl;

}