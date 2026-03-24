#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the sides of the triangle value:"<<endl;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    cout<<"c:";
    cin>>c;
    if((a+b)>c){
        cout<<"it is valid triangle";
    }
    else{
        cout<<"not a valid triangle";
    }
    return 0;
}