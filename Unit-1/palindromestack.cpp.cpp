#include <bits/stdc++.h>
using namespace std;
bool isPalindromeInt(int num) {
    if (num < 0) return false; 
    string s = to_string(num);
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}
bool isPalindromeStr(const string &str) {
    string rev = str;
    reverse(rev.begin(), rev.end());
    return str == rev;
}

int main() {
    string input;
    cin >> input;

    bool isNumber = all_of(input.begin(), input.end(), ::isdigit);

    if (isNumber) {
        int num = stoi(input);
        if (isPalindromeInt(num))
            cout << num << " is a palindrome." << endl;
        else
            cout << num << " is not a palindrome." << endl;
    } else {
        if (isPalindromeStr(input))
            cout << input << " is a palindrome." << endl;
        else
            cout << input << " is not a palindrome." << endl;
    }

    return 0;
}
