#include <iostream>

using namespace std;
int main(){

    string Name;
    int age;

    cout << "Enter Your Name: " << endl;
    getline(cin,Name);
    
    cout << "Enter Your age: "<< endl;
    cin >> age;

    cout << "Hello "<< Name <<" You are "<< age <<" Years old";

    return 0;
}