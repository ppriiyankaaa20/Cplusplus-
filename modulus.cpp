//the computer assumes 
//important case:- if wee use (-a)%b=-[a%b]
//if we use a%(-b)=a%b
//a%a=0
//a%b=a [if a<b]

#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter value of x and y=";
    cin>>x>>y;
    cout<<(-x)%y;
    return 0;
}