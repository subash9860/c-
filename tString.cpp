// Task
// Given a string, , of length  that is indexed from  to , print its even-indexed and odd-indexed characters as  space-separated strings on a single line (see the Sample below for more detail).

// Note:  is considered to be an even index.

// Example


// Print abc def

// Input Format

// The first line contains an integer,  (the number of test cases).
// Each line  of the  subsequent lines contain a string, .

// Constraints

// Output Format

// For each String  (where ), print 's even-indexed characters, followed by a space, followed by 's odd-indexed characters.

// Sample Input

// 2
// Hacker
// Rank
// Sample Output

// Hce akr
// Rn ak

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class PrintOut
{
    int  i, N;
    string s1,s2;
    public:
    PrintOut(string s){
        N = s.length();
        
        for(i=0; i < N; i++){
            if(i%2==0){
                s1 += s[i];
            }else{
                s2+= s[i];
            }
        }
        cout << s1 <<"  "<< s2;

    }
        
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     
    string s, s1,s2;
    int i,j,N, T;
    cin >> T;
    for (i=0; i < T; i++)
    {
        
       cin >> s;

    }
    for (i=0; i<T;i++)
    {
        PrintOut P(s);
    }

    
    
    return 0;
}