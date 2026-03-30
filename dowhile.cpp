#include<iostream>
using namespace std;
int main(){
    int i=1; //if i put 11 in this place the loop runs once and prints it later checks condition
    do{
        cout<<i<<" ";
        i++;
    }while(i<=10);
    return 0;
}