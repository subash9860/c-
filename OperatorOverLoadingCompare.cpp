/* WAp to compare two distance object using 
< and > operators. */

#include<iostream>
using namespace std;
class Compare{
    int d;
    public:
    void getdata(){
        cout<<"enter Distance"<<endl;
        cin>>d;
    }
    void operator < (Compare C){
        if (d < C.d)
        cout<< "Object Distance " << C.d <<" is greater than " << d << endl;
        // else 
        // cout << d <<" is greater than " << C.d << endl;
    }
    void operator > (Compare C){
        if (d > C.d)
        cout << "Object Distance " << d << " is greater than " << C.d <<endl;
        // else 
        // cout << C.d <<" is greater than " << d << endl;
    }

};

int main(){
    Compare c1, c2;
    c1.getdata();
    c2.getdata();
    c1 > c2;
    c1 < c2 ;
}