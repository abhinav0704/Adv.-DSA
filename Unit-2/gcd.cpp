//program for finding gcd using two number
#include <iostream>
using namespace std;

// Recursive function to find GCD
int gcd(int a, int b) {
    if (b == 0) 
        return a;   // base case
    return gcd(b, a % b); // recursive case
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
    return 0;
}
