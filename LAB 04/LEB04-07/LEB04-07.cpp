#include <iostream>
using namespace std;

// ถ้าเป็นจำนวนเฉพาะ ให้ return 1
// ถ้าไม่เป็น ให้ return 0
int checkPrime(int n) {
    // 1. ถ้าเลขน้อยกว่าหรือเท่ากับ 1 ไม่ใช่จำนวนเฉพาะ
    if (n <= 1) {
        return 0; // ส่งเลข 0 กลับไปบอกว่า "ไม่ใช่"
    }
    // 2. วนลูปเช็คตัวหาร
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0; // ถ้าหารลงตัว ส่งเลข 0 กลับไปทันที (ไม่ใช่)
        }
    }
    // 3. ถ้าหลุดลูปมาได้ แสดงว่าเป็นจำนวนเฉพาะ
    return 1; // ส่งเลข 1 กลับไปบอกว่า "ใช่"
}

int main() {
    int number;
    cout << "Enter a number to check: ";
    cin >> number;

    // เรียกใช้ฟังก์ชัน แล้วเอาผลลัพธ์มาเช็คว่าเป็น 1 หรือไม่
    if (checkPrime(number) == 1) {
        cout << number << " is a PRIME NUMBER." << endl;
    }
    else {
        cout << number << " is NOT A PRIME NUMBER." << endl;
    }

    return 0;
}
