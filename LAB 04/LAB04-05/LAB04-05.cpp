#include <iostream>
#include <cstdlib> // จำเป็นสำหรับ rand() และ srand()
#include <ctime>   // จำเป็นสำหรับ time()
using namespace std;

int main() {
    // 1. ตั้งค่า Seed ให้การสุ่มเปลี่ยนไปตามเวลา (ถ้าไม่ใส่ เลขจะซ้ำเดิมทุกครั้ง)
    srand(time(0));

    // 2. สุ่มเลข 1 ถึง 100
    // rand() % 100 จะได้ค่า 0-99 เราเลยต้อง +1 เพื่อให้เป็น 1-100
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0; // ตัวนับจำนวนครั้งที่ทาย

    cout << "=== Guess the Number Game (1-100) ===" << endl;
    cout << "I have chosen a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;
    cout << "-------------------------------------" << endl;

    // 3. วนลูปให้ผู้ใช้ทายไปเรื่อยๆ จนกว่าจะถูก
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++; // บวกจำนวนครั้งที่ทาย

        if (guess > secretNumber) {
            cout << "Too High! (มากไป)" << endl;
        }
        else if (guess < secretNumber) {
            cout << "Too Low! (น้อยไป)" << endl;
        }
        else {
            cout << endl;
            cout << "**********************************" << endl;
            cout << "Correct! The number was " << secretNumber << endl;
            cout << "You guessed it in " << attempts << " tries." << endl;
            cout << "**********************************" << endl;
        }

    } while (guess != secretNumber); // เงื่อนไข: ถ้ายังทายไม่ถูก ให้วนลูปต่อ

    return 0;
}