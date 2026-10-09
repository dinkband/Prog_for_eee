#include <iostream> 

int main(){
    int length, width, perimeter, area;

    std::cout << "Pls input rectangle length:" << std::endl;
    std::cin >> length;

    std::cout << "Pls input rectangle width:" << std::endl;
    std::cin >> width;

    perimeter = 2*length + 2*width;
    area = length*width;
    
    std::cout << "Rectangle perimeter=" << perimeter << std::endl;
    std::cout << "Rectangle area=" << area << std::endl;

    return 0;
}