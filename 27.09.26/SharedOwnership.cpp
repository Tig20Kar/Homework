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
    std::shared_ptr<int[]> arr = std::make_shared<int[]>(n);

    for(int i = 0;i<n;i++){
        arr[i] = i * i;
    }

    std::cout << "Use count" << arr.use_count() << std::endl;

    std::shared_ptr<int[]> arr2 = arr;

    std::cout << "Use count " << arr.use_count() << std::endl;

    arr2.reset();

    std::cout << "Use count " << arr.use_count() << std::endl;
    
}

int main(){

    getArray();
    return 0;
}