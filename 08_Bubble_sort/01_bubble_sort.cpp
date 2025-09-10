#include <iostream>

using namespace std;

void bubbleSort(int numbers[], int size);

int main(){

    int numbers[] = {10,2,4,1,8,3,7,9,6,5};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    bubbleSort(numbers, size);

    for (int item : numbers){
        cout << item << " ";
    }

    return 0;
}

void bubbleSort(int numbers[], int size){
    int temp;

    for(int i = 0; i < size - 1; i++){

        for(int j=0; j < size - i - 1 ; j++){

            if(numbers[j] > numbers[j + 1]){

                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;

            }
        }
    }
}