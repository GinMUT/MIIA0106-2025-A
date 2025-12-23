#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void displayStudentInfo(string name, string id, double score, char grade)
{
	cout << "Student Name: " << name << "\n";
	cout << "Student ID : " << id << "\n";
	cout << "Score : " << fixed << setprecision(2) << score << "\n";
	cout << "Grade : " << grade << "\n";
}

void calculateGrade(double score, char& grade)
{
	if (score >= 90) grade = 'A';
	else if (score >= 80) grade = 'B';
	else if (score >= 70) grade = 'C';
	else if (score >= 60) grade = 'D';
	else grade = 'F';
}
    // TODO: วนรับข้อมูล N คน
	// Hint: getline(cin >> ws, name[i]); สําหรับชื่อ
	// TODO: calculateGrade(score[i], grade[i]);
	// TODO: วนแสดงผล N คน ด้วย displayStudentInfo
int main()
{
	const int N = 5;
	string name[N], id[N];
	double score[N];
	char grade[N];
	cout << "Enter information for " << N << " students:\n";
	for (int i = 0; i < N; i++) {
		cout << "Student " << (i + 1) << ":\n";
		cout << "Enter student name: ";
		getline(cin >> ws, name[i]);
		cout << "Enter student ID: ";
		cin >> id[i];
		cout << "Enter student score: ";
		cin >> score[i];
		calculateGrade(score[i], grade[i]);
		cout << endl;
	}
	for (int i = 0; i < N; i++) {
		cout << "Information for Student " << (i + 1) << ":\n";
		displayStudentInfo(name[i], id[i], score[i], grade[i]);
		cout << endl;
	}
	return 0;
}