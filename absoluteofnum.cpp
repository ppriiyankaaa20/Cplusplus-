#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number:";
    cin>>num;
    if(num>=0){
        cout<<num;
    }
    else{
        cout<<-num;
    }
    return 0;
}
//absolute of a value means it is always non negative eg:|-5|=5