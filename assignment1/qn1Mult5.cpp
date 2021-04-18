/*  Assignment 1
    1. Write a C++program that reads a number and tests whether it is multiple of 5 or not.
*/
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a Number:"<<endl;
    cin >> a;
    if(a % 5 ==0 )
    cout << "Multiple of 5"<<endl;
    else 
    cout << "Not"<< endl;
}