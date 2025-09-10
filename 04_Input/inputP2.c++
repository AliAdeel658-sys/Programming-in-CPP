#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    cout << "Enter Name: ";
    // cin >> name;
    getline(cin, name);

    cout << "Hello " << name;
    return 0;
}
// For string Input "cin" is no good it takes only one word 
// For taking input of multiple words or long string getline(cin , name_of_variable)