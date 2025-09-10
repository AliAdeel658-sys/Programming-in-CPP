#include <iostream>

using namespace std;

// template<int N>
template<typename T, int N>

class Array
{
public:
int GetSize() const {return N;}
private:
    // int myArray[N];
    T myArray[N];
};
int main(){
    // Array<10> newArray;
    Array<int,10> newArray;

    cout << newArray.GetSize();
    return 0;
}