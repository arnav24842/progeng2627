#include <iostream>

void swap(double& n1, double& n2){
    double temp;
    temp = n1;
    n1 = n2;
    n2 = temp;

}

void sort_three_numbers(double& s1, double& s2, double& s3){
     
    if(s1>s2){
        if(s1<s3){
            swap(s1, s2);
        }
        else{
            if (s2>s3){
                swap(s1, s3);
            }
            else{
                swap(s1, s3);
                swap(s1, s2);
            }
        }
    }
    else{
        if(s2>s3){
            if(s1<s3){
                swap(s2,s3);
            }
            else{
                swap(s2,s3);
                swap(s1,s2);
            }
            
        }
    }



}

int main(){
    double n1, n2, n3;
    std::cout << "please enter 3 numbers:" << std::endl;
    std::cin >> n1 >> n2 >> n3;
    sort_three_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;
}