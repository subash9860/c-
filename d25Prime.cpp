/*
Task
A prime is a natural number greater than  that has no positive divisors other than  and itself. Given a number, , determine and print whether it is  or .

Note: If possible, try to come up with a  primality algorithm, or see what sort of optimizations you come up with for an  algorithm. Be sure to check out the Editorial after submitting your code.

Input Format

The first line contains an integer, , the number of test cases.
Each of the  subsequent lines contains an integer, , to be tested for primality.

Constraints

Output Format

For each test case, print whether  is  or  on a new line.

Sample Input

3
12
5
7
Sample Output

Not prime
Prime
Prime
Explanation

Test Case 0: .
 is divisible by numbers other than  and itself (i.e.: , , , ), so we print  on a new line.

Test Case 1: .
 is only divisible  and itself, so we print  on a new line.

Test Case 2: .
 is only divisible  and itself, so we print  on a new line.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool primeornot(int n)
{
    int i ,sqr;
    if(n == 1)
    {
        return false;
    }
    if(n == 2)
    {
        return true;
    }
    sqr = sqrt(n);
    for(i = 2; i <= sqr; ++i )
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
        
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
        int n, i;
    bool f;
    cin >> n;
    
    vector<int> arr(n);
    for(i = 0; i < n; ++i)
    {
        cin >> arr[i];
        bool f = primeornot(arr[i]);
        
        if(f)
        {
            cout<<"Prime"<<endl;
        }
        else
        {
            cout<<"Not prime"<<endl;
        }
    }   
    return 0;
}
