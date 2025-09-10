#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double weight,height;

    cout << "Enter your Height in meters: ";
    cin >> height;
    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    double BMI = weight/(height*height);
    // cout <<BMI <<endl;

    if (BMI<18.5){
        cout << "You are UnderWeight";
    }
    else if(18.5<=BMI && BMI < 25.0){
        cout << "You are Normal";
    }
    else if(25.0<=BMI && BMI <= 30.0){
        cout << "You are OverWeight";
    }
    else{
        cout << "You are Obese";
    }
    return 0;
}