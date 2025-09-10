#include <iostream>

using namespace std;

template<typename t>

void print(t value){
    std::cout << value <<endl;
}

int main(){

    print("Hello world");
    print(1234);
    print(5.6f);
    
    return 0;
}