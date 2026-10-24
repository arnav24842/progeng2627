#include <iostream>

void div(double n1, double n2, double& peri, double& area){

    peri = 2 * (n1+n2);
    area = n1*n2;

}

int main(){

double a, b, peri, area;

std::cin>>a >>b;

div(a, b, peri, area);

std::cout << peri << std::endl;
std::cout<< area << std::endl;

}