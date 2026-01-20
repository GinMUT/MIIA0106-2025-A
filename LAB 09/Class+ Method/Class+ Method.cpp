// TODO 1) เติม field: id, nickname, height, weight  
// TODO 2) เขียน method input(), print(), calcBMI() 
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int id = 0;
    string nickname;
    string lineid;
    string phone;
    double height = 0.0;
    double weight = 0.0;

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
        cout << "Enter Height (m): ";
        cin >> height;
        cout << "Enter Weight (kg): ";
        cin >> weight;
    }

    void print() {
        cout << "ID: " << id << endl;
        cout << "Nickname: " << nickname << endl;
        cout << "Line ID: " << lineid << endl;
        cout << "Phone: " << phone << endl;
        cout << "Height: " << height << " m" << endl;
        cout << "Weight: " << weight << " kg" << endl;
    }

    double calcBMI() {
        return weight / (height * height);
    }
};

int main()
{
    Student s1;

    cout << "=== Input Student ===\n";
    s1.input();

    cout << "\n=== Student Info ===\n";
    s1.print();
    cout << "BMI : " << s1.calcBMI() << endl;

    return 0;
}