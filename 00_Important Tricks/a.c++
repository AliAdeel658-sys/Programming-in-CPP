#include <iostream>
// #include <ctime>

using namespace std;

// string name = "Adeel Ali";

// int main()
// {
//     cout << name;
//     cout <<" Hello World";
//     return 0;
// }

int main(){
    srand(time(NULL));

    int num1 = (rand() % 6) + 1;
    cout << num1;
    return 0;
}