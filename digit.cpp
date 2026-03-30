#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter number:";
    cin>>number;
    int count=0;
    for(int i=1;i>0;i++){
        cout<<i<<" "; number=number/10;
    }
    // while(number>0) {
    //     number=number/10;
    //     count++;
    //}
    cout<<count;

    return 0;
}