#include<iostream>
using namespace std;
int main(){
    float length;
    cout<<"enter the length of rectangle:";
    cin>>length;
    float breadth;
    cout<<"enter the breadth of the rectangle:";
    cin>>breadth;
    float width;
    cout<<"enter the width of the rectangle:";
    cin>>width;
    float area=length*breadth;
    cout<<area<< " is the area"<<endl;
    float perimeter=2*(length+width);
    cout<<perimeter<< " is the perimeter"<<endl;
    if(area>perimeter){
        cout<<"area is greater than perimeter";
    }
    else{
        cout<<"area is lesser than perimeter";
    }
    return 0;
}