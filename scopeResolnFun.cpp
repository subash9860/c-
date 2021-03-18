#include<iostream>
using namespace std;
namespace first 
{
    void display()
    {
        cout << "from namespace\n";
    }
}

void display(){
    cout<<"this is from scope\n";
}
int main(){
    first:: display();
    display();
    return 0;
}