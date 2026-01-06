// TODO 1) เติม field ใน struct Student ให้ครบ: id, nickname, lineId, phone
// TODO 2) เขียนฟังก์ชัน printStudent(Student s) ให้แสดงผลครบทุก field
// TODO 3) ใน main รับข้อมูล 1 คน แล้วเรียก printStudent(s1)

#include <iostream>
#include <string>
using namespace std;
struct Student {
	// TODO
	string id;
	string nickname;
	string lineId;
	string phone;
};
// TODO: เขียนฟังก์ชันนี้
void printStudent(Student s) {
	cout << "\n=== Output (from function) ===\n";
	cout << "ID: " << s.id << endl;
	cout << "Nickname: " << s.nickname << endl;
	cout << "LineID: " << s.lineId << endl;
	cout << "Phone: " << s.phone << endl;
}
int main() {
	Student s1;
	cout << "=== Input Student 1 ===\n";
	// TODO: cin >> ...
	// TODO: เรียก printStudent
	cout << "Enter ID: ";
	cin >> s1.id;

	cout << "Enter Nickname: ";
	cin >> s1.nickname;

	cout << "Enter LineID: ";
	cin >> s1.lineId;

	cout << "Enter Phone: ";
	cin >> s1.phone;
	printStudent(s1);

	return 0;
}