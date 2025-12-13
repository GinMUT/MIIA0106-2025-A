#include <iostream>
using namespace std;

int main() {
    cout << "******* For Loop******" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "i" << i << endl;
    }
    cout << "******* While Loop******" << endl;
    int j = 1;
    while (j <= 10) {
        cout << "j" << j << endl;
        j++;
    }
    cout << "******* Do-While Loop******" << endl;
    int k = 1;
    do {
        cout << "k" << k << endl;
        k++;
    } while (k <= 10);
    cout << endl;
    return 0;
}