#include <iostream>

using namespace std;

int main(){

    string grid[][3] = {{" R1 C1"," R1 C2"," R3 C3"},
                        {" R2 C1"," R2 C2"," R2 C3"},
                        {" R3 C1"," R3 C2"," R3 C3"}};

    int rows = sizeof(grid)/sizeof(grid[0]);
    int coulumns = sizeof(grid[0])/sizeof(grid[0][0]);

    for(int i = 0; i < rows; i++){
        // cout << grid[i] << " ";
        for(int j = 0; j < coulumns; j++){
            cout << grid[i][j];
        }
        cout << '\n';
    }
    
    return 0;
}