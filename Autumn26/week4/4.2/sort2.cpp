#include <iostream>

void swap(double& n1, double& n2){
    double temp;
    temp = n1;
    n1 = n2;
    n2 = temp;

}

void sort_two_numbers(double& s1, double& s2){
     
    if(s1>s2){
        swap(s1,s2);
    }



}

int main(){
    double n1, n2;
    std::cout << "please enter two numbers:" << std::endl;
    std::cin >> n1 >> n2;
    sort_two_numbers(n1, n2);
    std::cout << n1 << " " << n2 << std::endl;
}

