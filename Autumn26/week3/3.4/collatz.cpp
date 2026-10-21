#include <iostream>

int main(){

    int n, counter;

    std::cin >> n;
    counter = 0;

    while(n != 1){
        if(n % 2 == 0){
            n = n/2;
            //std::cout << n << "\t" << std::flush;
            counter++;
        }
        else{
            n = (3*n)+1;
            //std::cout << n << "\t" << std::flush;
            counter++;
        }
    }

std::cout << counter << " steps" << std::endl;
}