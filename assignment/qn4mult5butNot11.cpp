/*  Assignment 1
    4. Write a C++program that reads a number and tests whether it is multiple of 5 but not 11.
*/
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a Number:"<<endl;
    cin >> a;
    if (a%5 == 0 && a%11 != 0)
    {
        cout << "Multiple of 5 but not 11 "<<endl;
    }
    else{
    cout << "Not"<< endl;

    }
}