#include <iostream>
#include <string>

int square(int n){
    return n * n;
}

int flipSign(int n){
    return n ? n * (-1) : n * (-1);
}

int addTen(int n){
    return n += 10;
}

void applyAll(int* arr, int n, int (*f)(int)){
    for(int i = 0;i<n;i++){
        arr[i] = f(arr[i]);
    }
}

bool isPositive(int n){
    return n > 0;
}

bool divisibleByThree(int n){
    return n % 3 == 0;
}

bool isSingleDigit(int n){
    return std::to_string(n).size() == 1;
}

int countIf(const int* arr, int n, bool (*pred)(int)){
    int count = 0;
    for(int i = 0;i<n;i++){
        if(pred(arr[i])){
            count++;
        }
    }
    return count;
}

int main(){

    int arr[] = {-4, 0, 3, 12, 9, -6, 27, 8, 15};

    bool (*predicate[3])(int) = {isPositive,isSingleDigit,divisibleByThree};
    std::string names[] = {"Positive"," Single Digit"," Divisible By Three"};


    for(int i = 0;i<3;i++){
        std::cout << names[i] << ": " << countIf(arr,9,predicate[i]);
    }

    std::cout << "\n" <<"---------------------------------------------" << "\n" << "Items: ";
    applyAll(arr,9,square);

    for(int i = 0;i<9;i++){
        std::cout << arr[i] << ",";
    }

    return 0;
}

