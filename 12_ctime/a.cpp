#include <iostream>
#include <ctime>

using namespace std;

int main(){
    time_t pt;
    pt = time(NULL);
    int time = pt;

    int c_sec = pt%60;
    int c_min = pt/60%60;
    int c_hour = (pt/3600  + 5) %24;

    cout << "H: "<< c_hour << " M: " << c_min << " S: " << c_sec;

    return 0;
}