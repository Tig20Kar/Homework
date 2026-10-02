#include <iostream>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int (*array[4])(int, int){
    add,
    subtract,
    multiply,
    divide
};

int main()
{

    std::cout << "Add: " << array[0](5, 6) << std::endl;
    std::cout << "Subtract: " << array[1](12, 7) << std::endl;
    std::cout << "Multiply: " << array[2](4, 9) << std::endl;
    std::cout << "Divide: " << array[3](5, 5) << std::endl;

    return 0;
}