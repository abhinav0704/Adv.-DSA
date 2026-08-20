//program to check a given number is palindrome or not using stack
#include <iostream>
#include <stack>
using namespace std;

bool isPalindrome(int num) {
    if (num < 0) return false; // negative numbers not considered palindrome

    stack<int> st;
    int temp = num;

    // Step 1: Push all digits into stack
    while (temp > 0) {
        st.push(temp % 10);
        temp /= 10;
    }

    temp = num;

    // Step 2: Compare digits by popping from stack
    while (temp > 0) {
        int digit = temp % 10;   // last digit of number
        int top = st.top();      // top digit from stack
        st.pop();

        if (digit != top) {
            return false;        // mismatch → not palindrome
        }
        temp /= 10;
    }

    return true; // all digits matched
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << num << " is a palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;

    return 0;
}
