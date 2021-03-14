#include<iostream>
using namespace std; // std scope for identifier 
int main()
{
    float number1, number2, sum, avg;
    cout << "Enter two number:\t"; //to display and << is inseration operator
    cin >> number1 >> number2;     // to take input and >> is extertion operator

    sum = number1 + number2;
    avg = sum/2;

    cout << "Sum : " << sum << endl;
    cout << "Average: " << avg << endl;

    return 0;
}