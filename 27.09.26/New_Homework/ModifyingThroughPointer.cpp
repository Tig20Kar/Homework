#include <iostream>

void doubles(int* n)
{
    *n *= 2;
}

void getNumber()
{
    int n;
    std::cout << "Please write number! ";
    std::cin >> n;

    doubles(&n);

    std::cout << "Your number " << n;
}

int main()
{
    getNumber();
    return 0;
}