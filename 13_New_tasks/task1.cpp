#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double x,y;

    cout <<"Enter x-coordinates: ";
    cin >> x;
    cout <<"Enter y-coordinates: ";
    cin >> y;

    double distance = sqrt(pow(x,2)+pow(y,2));

    cout << "Euclidean distance from (" << x << ", " << y << ") to the origin: " << distance << endl;

    return 0;
}