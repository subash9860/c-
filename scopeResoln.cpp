#include<iostream>
using namespace std;
namespace variable1{
    int val = 50;
}
namespace variable2{
    int val = 30;
}

int main(){
    int val = 10;
    cout<<"value of variable1 is "<<variable1 :: val<<endl;
    cout<<"value of variable2 is "<<variable2 :: val<<endl;
    cout<<"value of val is "<<val<<endl;
}