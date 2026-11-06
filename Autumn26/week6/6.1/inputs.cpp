#include <iostream>
#include <fstream>

int main(){
    std::ifstream infile;
    infile.open("input.txt");
    int sum;
    sum = 0;

    if(infile.is_open()){
        int tmp;

        while(infile >> tmp){
            std::cout << tmp << std::endl;
            sum += tmp;
        }

        infile.close();
        std::cout << sum << std::endl;
    }

    else{
         std::cout << "error opening file" << std::endl;
    }


}