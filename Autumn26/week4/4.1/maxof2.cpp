#include <iostream>

int max(int n1, int n2){

    if(n1>n2){
        return n1;
    }
    else{
        return n2;
    }
}

int main(){

    int n1, n2;

    std::cin>> n1;
    std::cin>> n2;

    std::cout << max(n1, n2) << std::endl;

}