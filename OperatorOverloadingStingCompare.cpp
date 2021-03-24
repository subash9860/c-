/* WAP to comapre two string using == operator. */

#include<iostream>
#include<string.h>

using namespace std;
class Compare_string
{
    char  s[20];
    public :
    void getdata()
    {
        cout << "Enter a String: ";
        cin >> s;
    }
    void operator == (Compare_string  c)
    {
        if (strcmp(s, c.s) == 0)
        {
            cout<< " Strings are same ."<<endl;
        }
        else
        {
            cout<< "Not same"<<endl;
        }
    }
};

int main()
{
    Compare_string c1, c2;
    c1.getdata();
    c2.getdata();
    c1==c2;
}