// Using Recursion Method to solve the problem 
#include <bits/stdc++.h>
using namespace std;
int fib(unsigned long long int number) {
    // is input number is less than or equal 1 then return input number  
    if (number <= 1)
        return number;
    return fib(number - 1) + fib(number - 2);
}
int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n; 
    // calling_function
    cout << fib(n);
    return 0;
}
// Complexity: O(2n), where n is the number of term to find.
// time complexity: O(2 the power n)
