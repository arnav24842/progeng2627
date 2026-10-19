#include <iostream>
#include <iostream>

int main(){
    std::string input;

    std::cin >> input;

    while( input != "STOP"){
        std::cout << input << std::endl;
        std::cin >> input;
        
    }
}