#include <iostream>

int main(){
    int n;

    std::cin >> n;

    while( (-11<n) && (n<11) ){
        std::cin >> n;
        std::cout << n << std::endl;
    }
}