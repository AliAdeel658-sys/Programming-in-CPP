#include <iostream>

using namespace std;

int main(){
    int op;
    int Row1,Col1,Row2,Col2;

    do{
        cout <<"Enter Operation to perform: \n1(for addition) \n2(for subtraction) \n3(for Multiplication) \n0(to Exit)\nInput: ";
        cin >>op;

        if(op == 0){
            break;
        }

        cout << "Enter Number of ROws & Col for Matrix1: ";
        cin >> Row1 >> Col1;

        cout << "Enter Number of ROws & Col for Matrix2: ";
        cin >> Row2 >> Col2;

        int M1[Row1][Col1];
        int M2[Row2][Col2];

        cout << "\nEnter Values for Matrix M1:"<<endl;

        for(int i = 0; i < Row1; i++){
            for(int j = 0; j < Col1; j++){
                cout <<"Matrix M1: ("<<i<<","<<j<<"): ";
                cin >> M1[i][j];
            }
        }

        cout << "\nEnter Values for Matrix M2:"<<endl;

        for(int i = 0; i < Row2; i++){
            for(int j = 0; j < Col2; j++){
                cout <<"Matrix M2: ("<<i<<","<<j<<"): ";
                cin >> M2[i][j];
            }
        }

        if(op == 1 || op == 2){

            int M3[Row1][Col1];

            if(Row1 != Row2 || Col1 != Col2){
                cout << "For addition or subtraction, matrices must have the same Number of Rows & Columns."<<endl;
            }
            else{
                for(int i = 0; i < Row1; i++){
                    for(int j = 0; j < Col1; j++){
                        if(op == 1){
                            M3[i][j] = M1[i][j] + M2[i][j];
                        }
                        else{
                            M3[i][j] = M1[i][j] - M2[i][j];
                        }
                    }
                }
                cout << "\nResultant Matrix: "<<endl;
                for(int i = 0; i < Row1; i++){
                    for(int j = 0; j < Col1; j++){
                        cout <<M3[i][j]<<"  ";
                    }
                    cout << endl;
                }
                cout << endl;
            }
        }
        else if(op == 3){
            int M3[Row1][Col2];

            if(Col1 != Row2){
                cout << "For multiplication, columns of Matrix M1 must equal to rows of Matrix M2;"<<endl;
            }
            else{
                for(int i =0; i< Row1; i++){
                    for(int j =0; j<Col2; j++){
                        M3[i][j] = 0;
                        for(int k = 0; k < Col1; k++){
                            M3[i][j] += M1[i][k] * M2[k][j];
                        }
                    }
                }
            }
                cout << "\nResultant Matrix: "<<endl;
                for(int i = 0; i < Row1; i++){
                    for(int j = 0; j < Col2; j++){
                        cout <<M3[i][j]<<"  ";
                    }
                    cout << endl;
                }
                cout << endl;
        }
    
    }while(true);

    return 0;
}
