#include <iostream>
using namespace std;
                        
// Swap using call by value 
void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
        
// Swap using call by reference 
void swapByReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 10, b = 20;
    cout << "Before swap: a = " << a << ", b = " << b << endl;

    swapByValue(a, b);
    cout << "After swap (Call by Value): a = " << a << ", b = " << b << endl;

    swapByReference(a, b);
    cout << "After swap (Call by Reference): a = " << a << ", b = " << b << endl;

    return 0;
}
