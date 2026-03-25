#include<iostream>
using namespace std;
int main(){
    int ram_age;
    int shyam_age;
    int ajay_age;
    cout<<"enter ram's age:";
    cin>>ram_age;
    cout<<"enter shyam's age:";
    cin>>shyam_age;
    cout<<"enter ajay's age:";
    cin>>ajay_age;
    if(ram_age<shyam_age){
        if(ram_age<ajay_age){
            cout<<"ram is the youngest";
        }
        else{
            cout<<"ajay is the youngest";
        }
    }
    else{
        if(shyam_age<ajay_age){
            cout<<"shyam is youngest";
        }
        else{
            cout<<"ajay is youngest";
        }
    }
    return 0;
}