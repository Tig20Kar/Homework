#include <iostream>
#include <map>
#include <string>

void transpose(const int src[2][3], int dst[3][2]){

    for(int i = 0;i<3;i++){
        for(int k = 0;k<2;k++){
            dst[i][k] = src[k][i];
        }
    }


    std::cout << "Row sums: ";
    for(int i = 0;i<2;i++){
        int sum = 0;
        for(int k = 0;k<3;k++){
            sum += src[i][k];
        }
        std::cout << sum << ",";
    }

    std::cout << "\n";
    
    std::cout << "Column sums: ";
    for(int i = 0;i<3;i++){
        int sum = 0;
        for(int k = 0;k<2;k++){
            sum += dst[i][k];
        }
        std::cout << sum << ",";
    }   

}

bool isMagic(const int m[3][3]){

    std::map<int,int> data = {
        {0,0},
        {1,0},
        {2,0}
    }; 


    for(int i = 0;i<3;i++){
        
        for(int k = 0;k<3;k++){
            data[i] += m[i][k];
        }
    }

    if(data[0] != data[1] && data[0] != data[2]){
        return false;
    }

    data[0] = 0;
    data[1] = 0;
    data[2] = 0;


    for(int i = 0;i<3;i++){
        for(int k = 0;k<3;k++){
            data[i] += m[k][i];
        }
    }

    if(data[0] != data[1] && data[0] != data[2]){
        return false;
    }

    data[0] = 0;
    data[1] = 0;
    data[2] = 0;

    for(int i = 0;i<3;i++){
        for(int k = 0;k<1;k++){
            data[0] += m[i][i]; 
        }
    }

    for(int i = 2;i >= 0;i--){
        for(int k = 0;k<1;k++){
            data[1] += m[i][i]; 
        }
    }

    if(data[0] != data[1]){
        return false;
    }


    return true;
}


int main(){

    int arr[2][3] = {{1,2,3},{4,5,6}};
    int arr2[3][2];

    // transpose(arr,arr2);

    int array[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    std::cout << isMagic(array);


    return 0;
}