#include <iostream>

double mypow(double x, double n){

    double ans =1;

    for(int i=0; i<n; i++){
        ans= ans*x;
    }

    if(n < 0){
        ans =1/ans;
    }

    return ans;
}

int main(){
    // we test examples with integer (and non-negative) exponent

    std::cout << "2^3: " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0: " << mypow(1, 0) << std::endl;
}