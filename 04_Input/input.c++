#include <iostream>

using namespace std;

int x;
int y;
int sum(int x,int y)
{
    cout << x+y;
    return 0;
}
int main()
{
    cout << "type value of x: ";
    cin >> x;
    cout << "type valuse of y: ";
    cin >> y;

    sum(x,y);
    return 0;
}
// For taking input "cin" is used and greater then signs >>
// "cin" needs a variable to work to store user input to a variable such as: 
// cin >> x;  where x is variable