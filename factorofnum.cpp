#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter num:";
    cin>>num;
    int factor=1;
    for(int i=1;i<num;i++){
        if(num%i==0)
        cout<<i<<" ";
        factor=i; 
    }
    return 0;
}