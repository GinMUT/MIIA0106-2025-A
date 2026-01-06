// TODO 1) เติม field ใน struct Student ให้ครบ: id, nickname, lineId, phone 
// TODO 2) รับค่าข้อมูลนักศึกษา 5 คน เก็บลง students[i] 
// TODO 3) แสดงผลข้อมูลนักศึกษาทั้ง 5 คน 
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
int main() {
	const int SIZE = 5;
	Student students[SIZE]; // Array ของ struct 
	// INPUT 
	for (int i = 0; i < SIZE; i++) {
		cout << "=== Input Student " << (i + 1) << " ===\n";
		cout << "Enter ID: ";
		cin >> students[i].id;

		cout << "Enter Nickname: ";
		cin >> students[i].nickname;

		cout << "Enter LineID: ";
		cin >> students[i].lineId;

		cout << "Enter Phone: ";
		cin >> students[i].phone;
		cout << endl;
	}
	// OUTPUT 
	cout << "\n===== Student List =====\n";
	for (int i = 0; i < SIZE; i++) {
		// TODO: cout << students[i]... 
		cout << "ID: " << students[i].id << endl;
		cout << "Nickname: " << students[i].nickname << endl;
		cout << "LineID: " << students[i].lineId << endl;
		cout << "Phone: " << students[i].phone << endl;
		cout << "----------------------\n"; cout << endl;
	}
	return 0;
}

