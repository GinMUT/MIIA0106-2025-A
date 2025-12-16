#include <iostream>
using namespace std;

double circleArea(double r) { return 3.1416 * r * r; }
double rectArea(double w, double h) { return w * h; }

int main() {
    cout << "Circle Area = " << circleArea(5) << endl;
    cout << "Rectangle Area = " << rectArea(5, 10) << endl;

    return 0;
}