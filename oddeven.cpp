#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a num:";
    cin>>n;
    if(n%2==0)
        cout<<"the entered num is even";
    else
        cout<<"the entered num is odd";
    return 0;
}
//can also be written using only if statements for both conditions
//if(n%2==0)
//if(n%2!=0)
//syntax: if(condition){
//}
//else{
//}  can also be written without flower bracs