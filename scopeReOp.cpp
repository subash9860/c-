#include<iostream>
using namespace std;
int m = 10 ; // global variable
int main(){
    int m = 20 ; // local variable
     
     cout << " value of global variable m is " << ::m << endl;
     cout << " value of local variable m is " << m << endl;
     return 0;

}