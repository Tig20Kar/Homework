#include <iostream>

void reverse(int (&arr)[],int size){

    int n = (size - 1);
    for(int i = 0;i < (size / 2);i++){
        int val = arr[i];
        arr[i] = arr[n];
        arr[n] = val;
        n--;
    }

}

int main(){
    
    int arr[] = {1,2,3,4,5};

    reverse(arr,5);

    for(int i = 0;i < 5 ;i++){
        std::cout << arr[i] << ",";
    }

    return 0;
}