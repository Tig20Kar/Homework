#include <iostream>

int getNumber(){

    int n;
    std::cout << "Please write number row! ";
    std::cin >> n;

    return n;
}


void getMatrix(){

    int a = getNumber();
    int b = getNumber();

    int arr[a][b];
    int value = 1;

    for(int i = 0;i<a;i++){
        for(int k = 0;k<b;k++){
            arr[i][k] = value;
            value++;
        }
    }


    for(int i = 0;i<a;i++){
        for(int k = 0;k<b;k++){
            std::cout << arr[i][k] << ",";
        }
        std::cout << std::endl;
    }

}


int main(){

    getMatrix();
    return 0;
}