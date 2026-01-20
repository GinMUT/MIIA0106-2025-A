// TODO 1) เติม field และ method ใน class Student  

// TODO 2) เขียนฟังก์ชัน printStudent(Student s)  

// TODO 3) เรียกใช้งาน printStudent จาก main 

#include<iostream>
#include<string>
using namespace std;
class Student

{
public:
	// TODO  
	int id;
	string nickname;
	string lineid;
	string phone;
	
	void input9() {
		cout << "Enter id "  ;
		cin >> id;
		cin.ignore();
		cout << "Enter nicknamr" ; 
		cin >> nickname;
		cout << "Enter lineid" ;
		cin >> lineid;
		cout << "Enter phone" ;
		cin >> phone;
	}
};
void printStudent(Student s)

{
	// TODO: แสดงข้อมูลจาก object s 
	cout << "ID: " << s.id << endl;
	cout << "Nickname: " << s.nickname << endl;
	cout << "Line ID: " << s.lineid << endl;
	cout << "Phone: " << s.phone << endl;
}

int main()

{
	Student s1;

	cout << "=== Input Student 1 ===\n";
	// TODO: s1.input(); 
	s1.input9();

	cout << "\n=== Output (from function) ===\n";
	// TODO: printStudent(s1); 
	printStudent(s1);

	return 0;

}