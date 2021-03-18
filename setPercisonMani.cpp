// The setprecision Manipulator This manipulator sets the n digits of 
//precision to the right of the decimal point to the floating point 
//output, where n is the argument to setprecision(n). 

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float e = 22/7.0;
    cout << e << endl;
    cout << setprecision(2)<<e<<endl;
}