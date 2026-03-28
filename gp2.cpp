#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter rang of num:";
    cin>>num;
    int gp=3;
    for(int i=3;i<=num;i++){
        cout<<gp<<" ";
        gp=gp*4;
    }
    return 0;
}