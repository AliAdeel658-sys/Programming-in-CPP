#include <iostream>

using namespace std;
int main(){

    int marks1,marks2,marks3,marks4,marks5;

    cout << "Marks of Subject 1: ";
    cin >> marks1;
    cout << "Marks of Subject 2: ";
    cin >> marks2;
    cout << "Marks of Subject 3: ";
    cin >> marks3;
    cout << "Marks of Subject 4: ";
    cin >> marks4;
    cout << "Marks of Subject 5: ";
    cin >> marks5;

    int total_marks = marks1+marks2+marks3+marks4+marks5;
    int average = total_marks/5;
    char grade;

    if (average >= 90 && average <=100) {
        grade = 'A';
    } else if (average >= 80 && average <=100) {
        grade = 'B';
    } else if (average >= 70 && average <=100) {
        grade = 'C';
    } else if (average >= 60 && average <=100) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    cout << "Grade: " << grade << std::endl;
    return 0;
}