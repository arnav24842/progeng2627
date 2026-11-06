#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>


int search_vector(std::string s, const std::vector<std::string>& vin){

    for(int i=0; i<vin.size(); i++){
        if(s == vin[i]){
            return 1;
        }
    }
    return 0;
}


void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    
    for(int i=0; i<vin1.size();i++){
        vout.push_back(vin1[i]);
    }
    
    for(int i=0; i<vin2.size();i++){
        if(search_vector(vin2[i],vout )){

        }
        else{
            vout.push_back(vin2[i]);
        }
    }

       
}


void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){

    for(int i=0; i<vin1.size();i++){
        if(search_vector(vin1[i],vin2 )){
            vout.push_back(vin1[i]);
        }
    }

}




int main(){

    std::string file1, file2;

    std::cout << "Enter file 1 name: " << std::endl;
    std::cin >> file1;
    std::cout << "Enter file 2 name: " << std::endl;
    std::cin >> file2;



    std::ifstream infile1; 
    infile1.open(file1);

    std::vector<std::string> v1;

    std::ifstream infile2; 
    infile2.open(file2);

    std::vector<std::string> v2;

    std::vector<std::string>vout;

    if(!infile1.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    if(!infile2.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile1 >> tmp){
        v1.push_back(tmp); 
   
    }

    infile1.close(); 

    while(infile2 >> tmp){
        v2.push_back(tmp); 
   
    }

    infile2.close(); 

    std::ofstream outfile1;
    outfile1.open("union.txt");

    std::ofstream outfile2;
    outfile2.open("intersection.txt");

    union_vector(v1,v2,vout);

    for(int i=0; i<vout.size(); i++){
        outfile1 << vout[i] << std::endl;
    }

    outfile1.close();

    vout.clear();

    intersection_vector(v1,v2,vout);

    for(int i=0; i<vout.size(); i++){
        outfile2 << vout[i] << std::endl;
    }

    outfile2.close();
}