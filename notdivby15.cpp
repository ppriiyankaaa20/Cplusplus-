#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number:";
    cin>>a;
    if((a%5==0 or a%3==0) and (a%15!=0)){
        cout<<"div by 5 or 3 but not by 15";
    }
    else{
        cout<<"div  by 15";
    }
    return 0;
}