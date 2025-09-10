#include <iostream>

using namespace std;

int main(){
    /*
    fill(array , end, item) ---> fill() is a method use to fill an array with some values 
    */

    string array[20];

    fill(array, array + 20, "items");

    for(string items : array){
        cout << items << '\n';
    }

    return 0;
}