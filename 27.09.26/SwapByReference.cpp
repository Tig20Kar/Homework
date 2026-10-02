#include <iostream>


void swap(int& a,int& b){
    int x = a;
    a = b;
    b = x;
}


int main(){

    int a = 5;
    int b = 7;


    std::cout << "Number A = " << a;
    std::cout << " Number B = " << b << std::endl;

    swap(a,b);

    std::cout << "Number A = " << a;
    std::cout << " Number B = " << b << std::endl;

    return 0;
}