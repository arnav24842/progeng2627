#include <iostream>

bool leap_year(int year){
    bool ly;

    if((year%4) == 0){

        if((year%100==0)){

            if((year%400 == 0)){
                ly = true;
            }
            else{
               ly = false;
        }  
        }
        else{    
        ly = true;
        }
    }
    else{
        ly = false;
    }

    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){

d2 = d1;
m2 = m1;
y2 = y1;

if( m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11){
    if(d1 == 30){
        m2 += 1;
        d2 = 1;
    }
    else{
        d2 += 1;
    }
}
else if(m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10){
    if(d1 == 31){
        m2 += 1;
        d2 = 1;
    }
    else{
        d2 += 1;
    }
}
else if(m1 == 2){
    if(d1 == 28){
        if(leap_year(y1)){
            d2 +=1;
        }
        else{
            m2 += 1;
            d2 = 1;

        }
    }
    else if(d1 == 29){
        m2 += 1;
        d2 = 1;
    }
    else{
        d2 +=1;
    }
}
else if(m1 == 12){
    if(d1 == 31){
        d2 = 1;
        m2 = 1;
        y2 += 1;
    }
    else{
        d2 +=1;
    }
}




}

int main(){

int d1, m1, y1, d2, m2, y2;

std::cin >>d1>>m1>>y1;

next_date( d1, m1, y1, d2, m2, y2);

std::cout << d2 << "/" << m2 << "/" << y2 << std::endl;

}