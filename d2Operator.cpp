/*
Task
Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost. Round the result to the nearest integer.

Example



A tip of 15% * 100 = 15, and the taxes are 8% * 100 = 8. Print the value  and return from the function.

Function Description
Complete the solve function in the editor below.

solve has the following parameters:

int meal_cost: the cost of food before tip and tax
int tip_percent: the tip percentage
int tax_percent: the tax percentage
Returns The function returns nothing. Print the calculated value, rounded to the nearest integer.

Note: Be sure to use precise values for your calculations, or you may end up with an incorrectly rounded result.

Input Format

There are  lines of numeric input:
The first line has a double,  (the cost of the meal before tax and tip).
The second line has an integer,  (the percentage of  being added as tip).
The third line has an integer,  (the percentage of  being added as tax).

Sample Input

12.00
20
8
Sample Output

15
Explanation

Given:
, , 

Calculations:




We round  to the nearest integer and print the result, .
*/

#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
    float tip, tax, total_cost;
    tip = (meal_cost/100)*float(tip_percent);
    tax = (float(tax_percent)/100)*meal_cost;
    total_cost = meal_cost + tip + tax;
    cout << round(total_cost) << endl;
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}


