#include <iostream>


int getNumber(){

    int n;
    std::cout << "Please write number ";
    std::cin >> n;

    return n;
}


void getMax(int arr[10]){

    int max = arr[0];
    for(int i = 1;i<10;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    std::cout << "Max: " << max;

}

void getMin(int arr[10]){
    int min = arr[0];
    for(int i = 1;i<10;i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }

    std::cout << ", Min: " << min;
}

void getSum(int arr[10]){

    int res = arr[0];

    for(int i = 1;i<10;i++){
        res += arr[i];
    }

    std::cout << ", Sum: " << res;
}

void getAverage(int arr[10]){
    int sum = arr[0];

    for(int i = 1;i<10;i++){
        sum += arr[i];
    }

    std::cout << ", Average: " << (sum / 10);

}



void getArray(){

    int arr[10];

    for(int i = 0;i<10;i++){
        arr[i] = getNumber();
    }

    getMax(arr);
    getMin(arr);
    getSum(arr);
    getAverage(arr);
}



int main(){

    getArray();
    return 0;
}