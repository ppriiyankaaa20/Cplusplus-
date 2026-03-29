#include<iostream>
using namespace std;
int main(){
    int num; //creating variable called num for user i/p
    cout<<"enter num:"; //asks the user to enter num
    cin>>num; //stores user i/p in num
    int fact=1; //creating variable called fact and assigning value 1 to it
    for(int i=num/2;i>=1;i--){ //i starts from half of the entered num checks if i is greater than 1 if it is true it checks if cond
        if(num%i==0) fact=i; //checks if entered num is divisible by i if yes it stores it into fact
        break; //stored fact num will get printed in o/p since it is coming from back
    }
    cout<<fact;
    return 0;
    }
