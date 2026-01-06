#include <iostream>
#include <string>
using namespace std;

// 1. Struct Phone (กล่องเล็กสุด: เก็บเบอร์โทร)
struct Phone {
    string mobile;
    string home;
};

// 2. Struct Parent (กล่องกลาง: เก็บข้อมูลผู้ปกครอง + ดึง Phone มาใช้)
struct Parent {
    string name;
    string relationship;
    Phone contact;      
};

// 3. Struct Student (กล่องใหญ่สุด: เก็บข้อมูลนักเรียน + ดึง Phone และ Parent มาใช้)
struct Student {
    string id;
    string nickname;
    string lineId;
    Phone myContact;     
    Parent myParent;     
};

// --- ส่วนที่ 2: ฟังก์ชันรับค่า (Input Function) ---
void getStudentInfo(Student& s) {
    // สังเกต &s คือการส่งตัวแปรตัวจริงมาแก้ไข (Pass by Reference)

    // 1. ข้อมูลส่วนตัวนักเรียน
    cout << "--- 1. Enter Student Data ---" << endl;
    cout << "ID: ";
    cin >> s.id;
    cout << "Nickname: ";
    cin >> s.nickname;
    cout << "Line ID: ";
    cin >> s.lineId;

    // 2. เบอร์โทรนักเรียน (เข้าถึงชั้นที่ 2: s -> myContact)
    cout << endl << "--- 2. Enter Student's Contact Info ---" << endl;
    cout << "Mobile Number: ";
    cin >> s.myContact.mobile;
    cout << "Home Number: ";
    cin >> s.myContact.home;

    // 3. ข้อมูลผู้ปกครอง (เข้าถึงชั้นที่ 2: s -> myParent)
    cout << endl << "--- 3. Enter Parent Data ---" << endl;
    cout << "Parent's Name: ";
    cin >> s.myParent.name;
    cout << "Relationship: ";
    cin >> s.myParent.relationship;

    // 4. เบอร์โทรผู้ปกครอง (เข้าถึงชั้นที่ 3: s -> myParent -> contact)
    cout << endl << "--- 4. Enter Parent's Contact Info ---" << endl;
    cout << "Parent's Mobile Number: ";
    cin >> s.myParent.contact.mobile;
    cout << "Parent's Home Number: ";
    cin >> s.myParent.contact.home;
}

// --- ส่วนที่ 3: ฟังก์ชันแสดงผล (Output Function) ---
void printStudentInfo(Student s) {
    cout << endl << "========================================" << endl;
    cout << "        DISPLAY STUDENT INFORMATION        " << endl;
    cout << "========================================" << endl;

    // แสดงข้อมูลทีละส่วน ตามที่รับมา
    cout << "1. Student Data:" << endl;
    cout << "   ID: " << s.id << endl;
    cout << "   Nickname: " << s.nickname << endl;
    cout << "   Line ID: " << s.lineId << endl;

    cout << "2. Student's Contact Info:" << endl;
    cout << "   Mobile: " << s.myContact.mobile << endl;
    cout << "   Home: " << s.myContact.home << endl;

    cout << "3. Parent Data:" << endl;
    cout << "   Name: " << s.myParent.name << endl;
    cout << "   Relationship: " << s.myParent.relationship << endl;

    cout << "4. Parent's Contact Info:" << endl;
    cout << "   Mobile: " << s.myParent.contact.mobile << endl;
    cout << "   Home: " << s.myParent.contact.home << endl;
}

// --- ส่วนที่ 4: ฟังก์ชันหลัก (Main Function) ---
int main() {
    Student s1; // สร้างตัวแปร s1 ตามโจทย์

    getStudentInfo(s1);   // เรียกฟังก์ชันให้ user กรอกข้อมูลใส่ s1
    printStudentInfo(s1); // เรียกฟังก์ชันแสดงข้อมูล s1 ออกมาดู

    return 0;
}