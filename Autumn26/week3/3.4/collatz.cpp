#include <iostream>

int main(){

    int n, counter, temp;

    std::cin >> n;
    counter = 0;

    temp = n;

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



        if(n>temp){
            temp = n;
        }
    }

std::cout << counter << " steps" << std::endl;
std::cout << "max: " << temp << std::endl;
}