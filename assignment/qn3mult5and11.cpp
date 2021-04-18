/*  Assignment 1
    3. Write a C++program that reads a number and tests whether it is multiple of 5 and 11.
*/
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a Number:"<<endl;
    cin >> a;
    if (a%5 == 0 && a%11 == 0)
    {
        cout << "Multiple of 5 and 11 "<<endl;
    }
    else{
    cout << "Not"<< endl;

    }
}