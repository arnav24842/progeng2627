#include <iostream>

int main(){

    double pounds, euros;

    std::cout << "Enter amount in pounds" << std::endl;
    std::cin >> pounds;

    euros = pounds * 1.18;

    std::cout << "Amount in euros is: " << euros << std::endl;

}