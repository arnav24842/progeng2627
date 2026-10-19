#include <iostream>

int main(){

int n, acc;

std::cin >> n;

acc=1;

for(int i = 0; i <n; i++){

    acc = acc * (n-i);
}

std::cout << acc << std::endl;

}