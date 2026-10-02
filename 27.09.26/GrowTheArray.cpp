#include <iostream>

int getNumber()
{
    int n;
    std::cout << "Please write number ";
    std::cin >> n;

    return n;
    
}

void getArray(){

    int n = getNumber();
    int* arr = new int(n);
    
    std::cout << "Array values ";
    for(int i = 0; i < n ; i++){
        arr[i] = i * i;
    }    

    int* data = new int(n + n);

    for(int i = 0; i < n ; i++){
        data[i] = arr[i];
        std::cout << data[i] << ",";
    }

    for(int i = n; i < (n + n) ; i++){
        data[i] = i + i;
        std::cout << data[i] << ",";

    }

    delete[] arr;

}


int main(){

    getArray();
    return 0;
}