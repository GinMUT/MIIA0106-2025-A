// 1. Add fields `studentID` and `nickname` to struct Student.
// 2. Use pointer p to point to s1.
// 3. Assign values to s1 via p->studentID and p->nickname.
// 4. Print values using p->studentID and p->nickname.

#include <iostream>
#include <string>
using namespace std;
struct Student {
	// TODO 1) เติม field ใน struct Student ให้ครบ: studentID, nickname
	string studentID;
	string nickname;
};
int main() {
	Student s1;
	Student* p = nullptr;
	// TODO 2) ใช้ pointer p ชี้ไปที่ s1
	p = &s1;
	// TODO 3) ก าหนดค่าโดยใช้ p->
	p->studentID = "6811830012";
	p->nickname = "Gin";
	// TODO 4) แสดงผลโดยใช้ p->
	cout << "ID: " << p->studentID << endl;
	cout << "Nickname: " << p->nickname << endl;
	return 0;
}