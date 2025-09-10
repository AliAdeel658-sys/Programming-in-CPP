#include <iostream>

int add2(int num1,int num2)
{
    int i = num1 + num2;
}

int multiply(int num1, int num2){
    int j = num1 * num2;
}

int main()
{
    std::cout << add2(2,3) << "\n";
    std::cout << multiply(2,3) << "\n";

    return 0;
}