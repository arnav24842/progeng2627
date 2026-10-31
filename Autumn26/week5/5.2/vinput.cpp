#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;

    int n, in;

    std::cout << "How many nums in the vector: " << std::endl;
    std::cin >> n;

    for(int i=0;i<n;i++){
        std::cout << "Input number: " << std::endl;
        std::cin >> in;
        v.push_back(in);

    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}