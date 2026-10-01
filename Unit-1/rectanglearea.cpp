#include <bits/stdc++.h>
using namespace std;
//object as an argument create a class an rectangle and pass two rectangle objects to a function to find which has large area.
class Rectangle {
    int length;
    int breadth;

public:
    // Constructor
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Function to calculate area
    int area() {
        return length * breadth;
    }
};

// Function that takes two Rectangle objects and compares their areas
void greaterarea(Rectangle r1, Rectangle r2) {
    if (r1.area() > r2.area()) {
        cout << "First rectangle has larger area: " << r1.area() << endl;
    } else if (r2.area() > r1.area()) {
        cout << "Second rectangle has larger area: " << r2.area() << endl;
    } else {
        cout << "Both rectangles have equal area: " << r1.area() << endl;
    }
} // program to find febonacci number by recursion
// program for finding nth fenacci number using recurssion and improving its run time to save stack operation

int main() {
    Rectangle rect1(10, 5);
    Rectangle rect2(8, 7);

    greaterarea(rect1, rect2);



}
