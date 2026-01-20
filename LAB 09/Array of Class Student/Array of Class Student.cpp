// TODO 1) เติม field และ method ใน class Student  

// TODO 2) รับข้อมูลนักศึกษา 5 คน  

// TODO 3) แสดงผลข้อมูลนักศึกษาทั้งหมด 

#include<iostream>
#include<string>  
using namespace std;

class Student {

public:
    // TODO 
    int id;
    string nickname;
    string lineid;
    string phone;

    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Nickname: ";
        getline(cin, nickname);
        cout << "Enter Line ID: ";
        getline(cin, lineid);
        cout << "Enter Phone: ";
        getline(cin, phone);
    }

    void print() {
        cout << "ID: " << id << endl;
        cout << "Nickname: " << nickname << endl;
        cout << "Line ID: " << lineid << endl;
        cout << "Phone: " << phone << endl;
    }

};

int main()

{

    const int SIZE = 5;

    Student students[SIZE];

    // INPUT 
    for (int i = 0; i < SIZE; i++)

    {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO: students[i].input(); 
        students[i].input();
        cout << endl;
    }

    // OUTPUT 
    cout << "\n===== Student List =====\n";
    for (int i = 0; i < SIZE; i++)

    {
        // TODO: students[i].print(); 
        studenr[i].print();
        cout << "----------------------\n";
    }

    return 0;

}