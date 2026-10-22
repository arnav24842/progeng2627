#include <iostream>
#include <cmath>

int main(){

    double x, n, sum;

    sum=0;
    std::cin >> x;
    std::cin >> n;

    for(double i=1; i<n+1; i++){
        sum += pow(x,i);

    }

    std::cout << sum << std::endl;

}
