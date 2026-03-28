#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter how many no.you want:";
    cin>>number;
    int a=1;
    for(int i=1;i<=number;i++){
        cout<<a<<" ";
        a=a*2;
    }
    return 0;
}