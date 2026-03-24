#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a:";
    cin>>a;
    if(a%5==0 && a%3==0){
        cout<<"it is divisible by 5 and 3";
    }
    else{
        cout<<"not divisible by 5 and 3";
    }
    return 0;
}
//(n%15==0) can also be written