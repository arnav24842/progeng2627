#include <iostream>

int smallestFactor(int n){

    for(int cf = 2; cf < n; cf ++){

        if((n%cf) == 0){
            return 1;
        }
        
    }
    return  0;
}

int main(){

    int n1, n2;
    std::cin >> n1 >> n2;

    for(int i = n1; i < n2 +1 ; i++){
        if(smallestFactor(i)){
        }
        else{
             std::cout << i << std::endl;
        }

    }

    
}