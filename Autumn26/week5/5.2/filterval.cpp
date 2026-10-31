#include <iostream>
#include <vector>

void filterV(const std::vector<double>& vin, double t, std::vector<double>& vout){

    for(int i=0;i<vin.size();i++){
        if(vin[i]<t){
            vout.push_back(vin[i]);
        }
    }
}

int main(){

    std::vector<double> v1 = {-1,2,3,5,7,99,56,0};
    std::vector<double> v2;

    int t =10;

    filterV(v1,t,v2);

    std::cout << "printing vector:" << std::endl;
        for(int i = 0; i < v2.size(); i++){
            std::cout << v2[i] << std::endl;

    }   
}    