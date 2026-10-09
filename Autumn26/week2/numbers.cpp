#include <iostream>

int main(){

    int n1, n2, perimeter, area;


    std::cout << "Enter first num" << std::endl;
    std::cin >> n1;

    std::cout << "Enter second num" << std::endl;
    std::cin >> n2;

    perimeter = 2*(n1 + n2);
    area = n1 * n2;

    std::cout << "The perimeter is " << perimeter << std::endl;
    std::cout << "The area is " << area << std::endl;


}