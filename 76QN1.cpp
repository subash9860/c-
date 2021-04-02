/*
1. Write a program according to the specification given below:
• Create a class Teacher with data members tid & subject and ember functions for reading and displaying data members.
• Create another class Staff with data members sid & position, and member function for reading and displaying data members.
• Derive a class Coordinator from Teacher and Staff and the class must have its own data member department and member
functions for reading and displaying data members.
• Create two object of Coordinator class and read and display their details.
*/

#include<iostream>
using namespace std;
class Teacher{
    int tid;
    string subject;
    public:
    void teacherdata(){
        cout << "Teacher id: ";
        cin >> tid;
        cout << "Subject: ";
        cin >> subject;
    }
    void teacherdisplay(){
        cout << "Teacher id: " << tid << endl;
        cout << "Subject: " << subject << endl;
    }
};
class Staff {
    int sid;
    string position;
    public:
    void staffdata(){
        cout << "Staff id :";
        cin >> sid;
        cout << "position: ";
        cin >> position;
    }
    void Staffdisplay(){
        cout << "Staff id :"<< sid<< endl;
        cout << "position: "<< position << endl;
    }
};
class Coordinator :public Teacher, public Staff {
    string department ;
    public :
    void getdata()//:Teacher:getdata(),Staff:getdata()
    {
        teacherdata();
        staffdata();
        cout << "Department: ";
        cin >> department; 
    }
    void display()
    {
        teacherdisplay();
        Staffdisplay();
        cout << "Department: " <<department << endl;
    }
};

int main(){
    Coordinator c1, c2;
    cout<< "Enter data for First object: " <<endl;
    c1. getdata();
    cout<< "\nEnter data for Second object: " <<endl;
    c2.getdata();
    cout<< "\nfirst Object "<<endl;
    c1.display();
    cout<< "\nSecond Object "<<endl;
    c2.display();
}