#include<iostream>
#include<iomanip>
using namespace std;
int main(){

    cout << setfill('*');
    cout<<setw(11)<<"Bhaktapur"<<endl<<setw(111)<<"Multiple"<<endl<<setw(11)<<"campus";
    cout << setw(5)<<1<<endl;
    cout << setw(5)<<10<<endl;
    cout << setw(5)<<100000<<endl;
}
// setw() to be printed within a field of n characters wide, where n is the argument to setw(n).
// The output is right justified within the field.

// setfill(*) : print * in whitespace 