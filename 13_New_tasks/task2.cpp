#include <iostream>

using namespace std;

int main(){
    int status, salery;

    cout << "Enter status 0-for single and 1-for married: ";
    cin >>status;
    cout << "Enter your salery: ";
    cin >>salery;

    if (status==0 && salery >0){
        if(salery>=0 && salery<=8350){
            double tax = salery*0.10;
            cout <<"Your tax will be; "<< tax;
        }
        else if(salery >= 8351 && salery <= 33950){
            double tax = salery*0.15;
            cout <<"Your tax will be; "<< tax;
        }
        else if(salery >= 33951 && salery <= 82250){
            double tax = salery*0.28;
            cout <<"Your tax will be; "<< tax;
        }
        else if(salery >= 82251 && salery <= 171550){
            double tax = salery*0.33;
            cout <<"Your tax will be; "<< tax;
        }
        else if(salery >= 171551 && salery <= 372950){
            double tax = salery*0.25;
            cout <<"Your tax will be; "<< tax;
        }
        else{
            double tax = salery*0.35;
            cout <<"Your tax will be; "<< tax;
        }
    }
    else if(status==1 && salery >0){
        if(salery>=0 && salery<=16700){
            double tax = salery*0.10;
            cout <<"Your tax will be; "<< tax;
        }
        else if(salery >= 16701 && salery <= 67900){
            double tax = salery*0.15;
            cout <<"Your tax will be; "<< tax;
        }
        else if(salery >= 67901 && salery <= 137050){
            double tax = salery*0.28;
            cout <<"Your tax will be; "<< tax;
        }
        else if(salery >= 137051 && salery <= 208850){
            double tax = salery*0.33;
            cout <<"Your tax will be; "<< tax;
        }
        else if(salery >= 208851 && salery <= 372950){
            double tax = salery*0.25;
            cout <<"Your tax will be; "<< tax;
        }
        else{
            double tax = salery*0.35;
            cout <<"Your tax will be; "<< tax;
        }
    }
    else{
        cout <<"Invalid status or salery:";
    }

    return 0;
}