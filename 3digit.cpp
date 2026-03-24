#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a number:";
    cin>>number;
    if(number>99 && number<1000){
        cout<<"it is a 3 digit number";
    }
    else{
        cout<<"it is not a 3 digit number";
    }
    return 0;
}
//and can also be written in place of &&