#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x;
    float y;

    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of y: ";
    cin >> y;

    // pow(value, power) --> Returns value to the power
    cout << pow(x, 2) << "\n";
    // sqrt(value) --> Returns square root of the value
    cout << sqrt(x) << "\n";
    // ceil(value) --> Rounds Up the value
    cout << ceil(y) << "\n";
    // floor(value) --> Rounds Down the value
    cout << floor(y) << "\n";

    return 0;
}