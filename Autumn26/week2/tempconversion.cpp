#include <iostream>

int main(){
    double cel, fah;

    std::cout << "Enter the temp in celsius: " << std::endl;
    std::cin >> cel;

    fah = (cel*9.5) + 32;

    std::cout << "The temperature in fahrenheit is: " << fah << std::endl;
    


}