#include <iostream>
#include <vector>

double minVector(const std::vector<double>& vin){

    double min;

    if(vin.size() == 0){
        return -1;
    }

    min = vin[0];

    for(int i=0; i<vin.size(); i++){
        if(vin[i] < min){
            min = vin[i];
        }
    }

    return min;

}

int main(){

    std::vector<double> v{4,1,5,0.5,2};

    double expectedMin = 0.5;

     std::cout << (minVector(v) - expectedMin) << std::endl;

     v = {5,2,7,2,-2,-0.3,3};
     
     expectedMin = -2;

    std::cout << ( minVector(v) - expectedMin) << std::endl;

    v ={};

    expectedMin = -1;

    std::cout << (minVector(v) - expectedMin) << std::endl;



}