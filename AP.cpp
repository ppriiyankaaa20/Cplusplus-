#include<iostream>
using namespace std;
int main(){
    //4 7 10 13 16 19...
    int n;
    cout<<"enter the num:";
    cin>>n;
    for(int i=4;i<=3*n-1;i+=3){
        cout<<i<<" ";
    }
    return 0;
}
//this program is arithmatic progression..it is a sequence of num where the diff b/w consecutive terms is constant
//an=a+(n-1)d this is the formula for nth term