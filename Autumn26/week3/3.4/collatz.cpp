#include <iostream>

int main(){

    int n;

    std::cin >> n;

    while(n != 1){
        if(n % 2 == 0){
            n = n/2;
            std::cout << n << "\t" << std::flush;
        }
        else{
            n = (3*n)+1;
            std::cout << n << "\t" << std::flush;
        }
    }


}