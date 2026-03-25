#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the values:";
    cin>>a>>b>>c;
    if(a>b and a>c){
        cout<<"a is the greatest";
    }
    else if(b>a and b>c){
        cout<<"b is the greatest";
    }
    else{
        cout<<"c is the greatest";
    }
    return 0;
}