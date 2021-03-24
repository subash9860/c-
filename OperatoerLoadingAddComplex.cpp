/* Wap to add two complex number using  + operator */
 #include<iostream>
 using namespace std;
class Add_Complex {
    int a, b;
    public:
    void setdata(int x, int y) {
        a = x;
        b = y;
    }
    void display(){
        cout<<"a= "<< a<<"  b = "<< b<<endl;
    }
    Add_Complex operator + (Add_Complex c){
        
        Add_Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return (temp);
    }
};

int main(){
    Add_Complex c1, c2, c3;
    c1.setdata(2,3);
    c2.setdata(4,5);
    c3 = c1 + c2;
    c3.display();
}

 