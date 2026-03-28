#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter num:";
    cin>>num;
    int fact=1;
    for(int i=num/2;i>=1;i--){
        if(num%i==0) fact=i;
        break;
    }
    cout<<fact;
    return 0;
    }
