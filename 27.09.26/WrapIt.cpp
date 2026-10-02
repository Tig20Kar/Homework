#include <iostream>
#include <memory>

int getNumber()
{
    int n;
    std::cout << "Please write number ";
    std::cin >> n;

    return n;
}


void getArray()
{
    int n = getNumber();

    auto arr = std::make_unique<int[]>(n);

    std::cout << "Array values ";
    for(int i = 0 ; i < n ; i++){
        arr[i] = ((i + i) * 2);
        std::cout << arr[i] << ",";
    }

}





int main(){

    getNumber();
    return 0;
}