#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter num:";
    cin>>num;
    bool flag =true; //true means prime
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            flag=false; //false means composite
            break;
        }
    }
    if(num==1) cout<<"neither prime nor composite";
    else if(flag==true) cout<<"prime";
    else cout<<"composite";
    return 0;
}