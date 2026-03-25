#include<iostream>
using namespace std;
int main(){
    float marks;
    cout<<"enter the marks:";
    cin>>marks;
    if(marks>=81 && marks<=100){
        cout<<"very good";
    }
    else if(marks>=61 && marks<=80){
        cout<<"good";
    }
    else if(marks>=41 && marks<=60){
        cout<<"okay";
    }
    else{
        cout<<"fail";
    }
    return 0;
}