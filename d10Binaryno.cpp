// Task
// Given a base- integer, , convert it to binary (base-). Then find and print the base- integer denoting the maximum number of consecutive 's in 's binary representation. When working with different bases, it is common to show the base as a subscript.

// Example

// The binary representation of  is . In base , there are  and  consecutive ones in two groups. Print the maximum, .

// Input Format

// A single integer, .

// Constraints

// Output Format

// Print a single base- integer that denotes the maximum number of consecutive 's in the binary representation of .

// Sample Input 1

// 5
// Sample Output 1

// 1
// Sample Input 2

// 13
// Sample Output 2

// 2
// Explanation

// Sample Case 1:
// The binary representation of  is , so the maximum number of consecutive 's is .

// Sample Case 2:
// The binary representation of  is , so the maximum number of consecutive 's is .

#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    int count=0 , max =0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    while(n)
    {
        if (n&1)
            count++;
        else 
            count = 0;
        if (max < count)
        {
            max = count;
        }
        n>>=1;
    }
    cout << max;

    return 0;
}
