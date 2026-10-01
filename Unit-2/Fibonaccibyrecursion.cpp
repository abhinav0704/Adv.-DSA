//program to find fibonacci number by recursion
#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n) {
    if (n == 0) 
        return 0;
    else if (n == 1)
        return 1;
    else 
        return fibonacci(n - 1) + fibonacci(n - 2); // recursive case
}

int main() {
    int num;
    cout << "Enter position: ";
    cin >> num;

    cout << "Fibonacci number at position " << num << " is: " << fibonacci(num) << endl;
    return 0;
}