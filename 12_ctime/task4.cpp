#include <iostream>

using namespace std;
int main(){

    int ferinhit;

    cout << "Temperature in Ferinhite: ";
    cin >> ferinhit;

    int celcius = (ferinhit - 32)* 5 / 9;
    cout << "Temperature in celcius: "<< celcius;

    return 0;
}