#include <iostream>

#include <string.h>


void power(int *x){

    *x = (*x)*(*x);
}

int modify(double &x){

    return x+1.0;
}


int main(){
    char name[] = "Mike"; //name is treated as a pointer to the first element

    double num  = 5.25;

    int y = modify(num);

    std::cout<<num<<std::endl;


    char *nameCopy;

    nameCopy=&name[0];

    nameCopy[3]='Y';

    int x = 3;

    power(&x);

    std::cout<<x<<std::endl;

    std::cout<<std::string(nameCopy)<<std::endl; 

    std::cout<<&name<<std::endl;
    
    return 0;
}