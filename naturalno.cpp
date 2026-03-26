#include<iostream>
using namespace std;
int main(){
    int sum=0;
    cout<<"the first 10 natural numbers are:";
    for(int i=1;i<=10;i++){
        cout<<i<<endl;
        sum=sum+i;
    }
    cout<<"the sum of first 10 natural numbers are:";
    cout<<sum;
    return 0;
}