#include <iostream>

int main(){
    double a, b, c;
    
    a=1;
    b=2;
    c = a + b;

    std::cout << c << std::endl;
    
    a=2;

    std::cout << c << std::endl;
    // I expect this to print 3

    c = a + b;

    std::cout << c << std::endl;
    // I expect this to print 4




}