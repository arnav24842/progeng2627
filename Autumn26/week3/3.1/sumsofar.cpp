#include <iostream>

int main(){
    double average, n, sum, counter;

    average = 0;
    sum = 0;
    counter = 1;

    std::cout << "enter a number: " << std::endl;
    std::cin >> n;

        while(n != 0){
            sum += n;
            average = sum/counter;
            std::cout << "the average so far is:" << std::endl;
            std::cout << average << std::endl;
            counter += 1;
            std::cout << "enter a number: " << std::endl;
            std::cin >> n;
        }

    }