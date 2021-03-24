/* Write a program to concatenate two strings using + operator. */

#include<iostream>
#include<string.h>
using namespace std;

class Concatenate
{
    char  s[20];
    public :
    void getdata()
    {
        cout << "Enter a String: ";
        cin >> s;
    }
    void display()
    {
        cout << " " << s <<endl;
    }
    Concatenate operator + (Concatenate  c)
    {
        Concatenate temp;
        strcpy(temp.s, s);
        strcat(temp.s, c.s);
        return temp;
    }
};

int main()
{
    Concatenate c1, c2, c3;
    c1.getdata();
    c2.getdata();
    c3 = c1 + c2;
    c3.display();
}