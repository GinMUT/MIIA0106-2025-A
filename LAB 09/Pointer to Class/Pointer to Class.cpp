// TODO 1) เติม field ใน class Student: id, nickname 
// TODO 2) ใช้ pointer p ชี้ไปที่ s1  
// TODO 3) กำหนดค่าโดยใช้ p->  
// TODO 4) แสดงผลโดยใช้ p-> 

#include <iostream>
#include <string>
using namespace std;
class Student

{

public: // TODO  
	int id;
	string nickame;
};
int main()
{

	Student s1;
	Student* p = nullptr;

	// TODO: p = &s1; 
	p = &s1;
	// TODO: p->id = ...; 
	p->id = 12;
	// TODO: p->nickname = ...; 
	p->nickame = "Gin";

	cout << "ID: " << p->id << endl;
	cout << "Nickname: " << p-> nickame << endl;

	return 0;

}