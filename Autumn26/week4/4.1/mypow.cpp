#include <iostream>

double mypow(double x, double n){

    double ans =1, temp =0;

    if(n<0){
        temp = -1*n;
    }
    

    for(int i=0; i<temp; i++){
        ans= ans*x;
    }

    if(n < 0){
        ans =1/ans;
    }

    return ans;
}

int main(){
    // we test examples with integer (and non-negative) exponent
double x, n, sum;

    sum=0;
    std::cin >> x;
    std::cin >> n;

    //for(double i=1; i<n+1; i++){
        sum += mypow(x,n);

    //}

    std::cout << sum << std::endl;
}