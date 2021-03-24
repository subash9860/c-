/* WAP to overload unary minus (-) operator to invert sign
 of the data member of a distance onject.*/

#include<iostream>
using namespace std;
class Sing_invert{
    int x ;
    public:
    void getdata(int a){
        x=a;
    }
    void display(){
        cout<<"x="<<x<<endl;
    }
    void operator - (){
        x = -x;
    }
};

int main (){
    Sing_invert s;
    s.getdata(20);
    -s;
    s.display();
}