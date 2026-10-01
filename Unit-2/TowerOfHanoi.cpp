#include <bits/stdc++.h>
using naemespace std;
void towerOfHanoi(int n, char big, char aux, char end) {
    if (n == 1) {
        cout << "Move disk 1 from " << big << " to " << end << endl;
        return;
    }
    towerOfHanoi(n - 1, big, aux, end);
    cout << "Move disk " << n << " from " << big << " to " << end << endl;
    towerOfHanoi(n - 1, aux, end, big);
}
int main() {
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}
// program to reverse the given using recursion and improving.