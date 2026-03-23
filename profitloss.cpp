#include<iostream>
using namespace std;
int main(){
    float costprice;
    cout<<"enter the cost price value:";
    cin>>costprice;
    float sellprice;
    cout<<"enter the sell price value:";
    cin>>sellprice;
    if(costprice>sellprice){
        cout<<"loss"<<endl;
        cout<<(costprice-sellprice) << " is the loss price";
    }
    else if(costprice<sellprice){
        cout<<"profit"<<endl;
        cout<<(sellprice-costprice) << " is the profit price";
    }
    else{
        cout<<"no profit no loss";
    }
    return 0;
}