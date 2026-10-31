#include <iostream>
#include <vector>

void appendVectors(const std:: vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){

    for(int i=0; i<vin1.size(); i++){
        vout.push_back(vin1[i]);
    }

    for(int i=0; i<vin2.size(); i++){
        vout.push_back(vin2[i]);
    }

}

int main(){

    std::vector<int> v1 = {1,7,3,4};
    std::vector<int> v2 = {2,-2,19};
    std::vector<int> v3;

    appendVectors(v1,v2,v3);

    std::cout << "printing vector:" << std::endl;
        for(int i = 0; i < v3.size(); i++){
            std::cout << v3[i] << std::endl;
        }
}