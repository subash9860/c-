/*
Write programs to add two object of distance class with data members
 feet and inch by using by using member function and friend function.
*/

#include<iostream>
using namespace std;
class Distance
{
    int feet ;
    float inch;
    public:
    void setdata(int x, float y)
    {
        feet = x;
        inch = y;
    }
    void display()
    {
        cout<<"feet :"<<feet<<"\tinch: "<<inch<<endl;
    }
    friend Distance operator +(Distance D1 , Distance D2);
};
Distance operator + (Distance D1, Distance D2)
{
    Distance temp;
    temp.feet = D1.feet + D2.feet ;
    temp.inch = D1.inch + D2.inch;
    return (temp);
}
int main()
{
    Distance a1, a2;
    a1.setdata(2,3.12);
    a2.setdata(5,6.9);
    (a1+a2).display();
}