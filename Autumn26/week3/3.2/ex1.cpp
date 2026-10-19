#include <iostream>

int main(){

    int n1,n2,acc;

    std::cin >> n1;
    std::cin >> n2;
    acc = 1;
    
    for(int i = 0; i < n2 ; i++){
        acc = acc * n1;
    }

    std::cout << acc << std::endl;
}


// I expect it output 0 to 6