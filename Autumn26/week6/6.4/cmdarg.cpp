#include <iostream>
#include <fstream>

int main(int argc, char* argv[]){

if(argc = 1){

   std::string fileName = argv[1];

   std::ifstream infile;

   infile.open(fileName);

   if(infile.is_open()){

    int tmp;

    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }

    infile.close();
 
   }
}



}