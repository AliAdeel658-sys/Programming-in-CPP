/*
static : it increase the life of variable and it also 
         maintains the scope of variable so it wont be used out of scope
*/
#include <iostream>

using namespace std;

// int this ex: value of i wont be changed if i call this functions more then one time
void With_out_static(){
    int i = 0;
    i++;
    cout << i ;
}

// int this ex: value of i will be changed if i call this functions more then one time
void with_static(){
    static int i = 0;
    i++;
    cout << i;
}
int main(){
    cout << "\nWith out static function" <<endl;
    With_out_static();
    With_out_static();
    With_out_static();
    
    cout << "\nWith static function" <<endl;
    with_static();
    with_static();
    with_static();
    return 0;
}