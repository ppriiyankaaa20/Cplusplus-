#include<iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    char ch;
    cout<<"enter num1:";
    cin>>num1;
    cout<<"enter num2:";
    cin>>num2;
    cout<<"enter operator:";
    cin>>ch;
    if(ch=='+'){
    cout<<num1+num2;
    }
    else if(ch=='-'){
    cout<<num1-num2;
    }
    else if(ch=='*'){
    cout<<num1*num2;
    }
    else {
    cout<<num1/num2;
    }
    return 0;
}