// LAB302.cpp : Grading System
#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentId;
    string name;
    int score;
    string grade;

    // --- ส่วนรับข้อมูล (Input) ---
    cout << "Enter student ID: ";
    cin >> studentId;

    // *สำคัญมาก* ต้องล้าง Enter เดิมทิ้งก่อนใช้ getline
    cin.ignore();

    cout << "Enter student name: ";
    getline(cin, name); // ใช้ getline เพื่อให้พิมพ์ชื่อเว้นวรรคได้ (Somchai Saetang)

    cout << "Enter score: ";
    cin >> score;

    // --- ส่วนคำนวณเกรด (Logic) ---
    if (score >= 90) {
        grade = "A";
    }
    else if (score >= 80) {
        grade = "B";
    }
    else if (score >= 70) {
        grade = "C";
    }
    else if (score >= 60) {
        grade = "D";
    }
    else {
        grade = "F";
    }

    // --- ส่วนแสดงผล (Output) ให้เหมือนในรูป ---
    cout << endl;
    cout << "----- Student Report -----" << endl;
    cout << "Student ID : " << studentId << endl;
    cout << "Name       : " << name << endl;
    cout << "Score      : " << score << endl;
    cout << "Grade      : " << grade << endl;
    cout << "--------------------------" << endl;

    return 0;
}
