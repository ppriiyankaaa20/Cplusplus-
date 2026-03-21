#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the value of x:";
    cin>>x;
    cout<<(float)x/2;
    return 0;
}
//typecasting means converting one data type into another one.
//here we can't write the operation as cout<<float(x/2); or cout<<(float)(x/2); because the typecasting first converts and then does the operation