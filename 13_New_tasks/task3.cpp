#include <iostream>

using namespace std;

int main(){
    int num, n1,n2,n4,n5;

    cout << "Enter 5-digit number: ";
    cin >> num;

    if (num <10000 || num >99999){
        cout << " invalid input write 5-digits numbers";
    }
    else{
        n1 = num /10000;
        n2 = (num /1000) %10;
        n4 = (num /10) %10;
        n5 = num %10;

        if(n1==n5 && n2 == n4){
            cout << "It is palindrome";
        }
        else{
            cout << "It is not palindrome";
        }
    }
    return 0;
}