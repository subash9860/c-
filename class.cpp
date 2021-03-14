#include<iostream>
using namespace std;

class Person
{
    char name[20];
    int age;
    
    public :
    void getdata();
    void display();
};

void Person :: getdata()
{
    cout << "Enter name:" << endl;
    cin >> name;
    cout << "Enter your age: " << endl;
    cin >> age;
}

void Person ::display()
{
    cout << "NAME: " << name << endl;
    cout << "AGE : " << age << endl;
}

int main()
{
    Person p;
    p.getdata();
    p.display();

    return 0;
}