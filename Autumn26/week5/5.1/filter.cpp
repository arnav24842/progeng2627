#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;

    int n, t;

    std::cout << "Input n: " << std::endl;
    std::cin >> n;

    for(int i=1; i < n + 1; i++){
        int tmp ;
        std::cout << "Input next num: " << std::endl;
        std::cin >> tmp;
        v.push_back(tmp);
    }


    std::cout << "Input t: " << std::endl;
    std::cin >> t;

    for(int i=0; i<n ; i++){
        if(v.at(i) < t){
            std::cout << v.at(i) << std::endl;
        }
    }




}