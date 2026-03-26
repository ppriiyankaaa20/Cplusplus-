#include<iostream>
using namespace std;
int main(){
    int n1;
    int n2;
    char ch;
    cout<<"enter n1:";
    cin>>n1;
    cout<<"enter n2:";
    cin>>n2;
    cout<<"enter ch:";
    cin>>ch;
    switch(ch){
        case '+':
        cout<<n1+n2;
        break;
        case '-':
        cout<<n1-n2;
        break;
        case '*':
        cout<<n1*n2;
        break;
        case '/':
        cout<<n1/n2;
        break;
    }
    return 0;
}