#include <iostream>
#include <vector>

double searchVector(double n, const std::vector<double>& vin){


    for(int i=0; i<vin.size(); i++){
        if (vin[i] == n){
            return i;
        }
    }   


    return -1;

}

int main(){

    std::vector<double> v{4,1,5,0.5,2};

    double expectedIndex = 3;

     std::cout << (searchVector(0.5,v) - expectedIndex) << std::endl;

     v = {5,2,7,2,-2,-0.3,3};
     
     expectedIndex = 1;

    std::cout << ( searchVector(2,v) - expectedIndex) << std::endl;

    v ={0,2,3,4,5};

    expectedIndex = -1;

    std::cout << (searchVector(1,v) - expectedIndex) << std::endl;



}