#include <bits/stdc++.h>
using namespace std;

string rotateString(string s, int k) {
    int n = s.size();
    k = ((k % n) + n) % n; // handle negative rotations
    return s.substr(n - k) + s.substr(0, n - k);
}

int main() {
    string S, R;
    int t;
    cin >> S >> R >> t; // input strings and number of operations
    
    vector<int> arr(t);
    int netRotation = 0;
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
        netRotation += arr[i];
    }
    
    string result = rotateString(S, netRotation);
    
    if (result == R)
        cout << "password accepted";
    else
        cout << "try again";
    
    return 0;
}
