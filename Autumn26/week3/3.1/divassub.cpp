#include <iostream>

int main(){

int n1, n2, acc, rem;

std::cin >> n1;
std::cin >> n2;

acc = 0;
rem = n1;

while(rem >= n2){
    rem = n1 - n2;
    acc += 1;
}

std::cout << acc << " rem " << rem << std::endl;


}