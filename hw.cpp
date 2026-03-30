// #include<iostream>
// using namespace std;
// int main(){
//     int x=1;
//     while(x==1)
//     x=x-1;
//     cout<<x<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     while(i=10){
//         cout<<i<<endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     while('a'<'b')
//     cout<<"malayalam is a palindrome"<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=10;

//     while(i=20)
//     cout<<"a comp buff!";
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int x=4,y=0;
    while(x>0){
        x--;
        y++;
        if(x==y)
        continue;
        else cout<<x<<" "<<y<<endl;
    }
    return 0;
}