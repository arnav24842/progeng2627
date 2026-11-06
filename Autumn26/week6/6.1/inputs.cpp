#include <iostream>
#include <fstream>

int main(){

    std::string file;

    std::cout << "Enter file name: " << std::endl;
    std::cin >> file;

    std::ifstream infile;
    infile.open(file);
    int sum;
    sum = 0;

    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

         

    int tmp;

    while(infile >> tmp){
        std::cout << tmp << std::endl;
        //sum += tmp;
    }

    infile.close();
    //std::cout << sum << std::endl;
    


}