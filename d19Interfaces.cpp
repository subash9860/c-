/*
Task
The AdvancedArithmetic interface and the method declaration for the abstract divisorSum(n) method are provided for you in the editor below.

Complete the implementation of Calculator class, which implements the AdvancedArithmetic interface. The implementation for the divisorSum(n) method must return the sum of all divisors of .

Example

The divisors of  are . Their sum is .


The divisors of  are  and their sum is .

Input Format

A single line with an integer, .

Constraints

Output Format

You are not responsible for printing anything to stdout. The locked template code in the editor below will call your code and print the necessary output.

Sample Input

6
Sample Output

I implemented: AdvancedArithmetic
12
Explanation

The integer  is evenly divisible by , , , and . Our divisorSum method should return the sum of these numbers, which is . The Solution class then prints  on the first line, followed by the sum returned by divisorSum (which is ) on the second line.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};
//Write your code here
class Calculator : public AdvancedArithmetic {
  public:
    virtual int divisorSum(int n) override {
        int sum = 0;
        if ( 1 == n ) { return 1; }
        
        // Identify the divisors
        for (int lo = 1, hi = n ; lo < hi ; ++lo) {
            if (n % lo) { continue; }
            sum += lo;
            hi = (n / lo);
            if (hi <= lo) { break; }
            sum += hi;
        }
        
        return sum;
    }
};
int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}