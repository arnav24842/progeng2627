#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;

    int n, s, counter;

    counter = 0;

    std::cout << "Input n: " << std::endl;
    std::cin >> n;

    for(int i=1; i < n + 1; i++){
        int tmp ;
        std::cout << "Input next num: " << std::endl;
        std::cin >> tmp;
        v.push_back(tmp);
    }


    std::cout << "Input s: " << std::endl;
    std::cin >> s;

    for(int i=0; i<n ; i++){
        if(v.at(i) == s){
            counter++;
        }
    }

    if(counter > 0){
        std::cout<< "there are " << counter << " occurrences of " << s << std::endl; 
    }
    else{
        std::cout<< "there are no occurrences of " << s << std::endl;
    }




}