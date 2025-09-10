#include <iostream>

// To declare variable in C++ you need to specify DataType
int age = 19;

// String Variable is Declared Differently in C++ 
std::string name = "Adeel Ali";

/*
C++ Have other DataTypes too

1) int --> integer for whole numbers
2) std::string --> for string
3) char --> for single Character "A","B","C"
4) float --> Decimal points with fewer decimals such as : 4.55
5) double --> Decimal points with larger decimals such as : 3.2222222
6) bool --> true or false

*/ 

int main(){
    std::cout << name << "\n";
    std::cout << age;
}