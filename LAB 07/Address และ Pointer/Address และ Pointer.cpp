// TODO: แสดงค่า score, address และ pointer
#include <iostream>
using namespace std;
int main() {
	int score = 50;
	int* ptr = &score;
	// TODO
	cout << score << endl;
	cout << *ptr << endl;

	cout << "Score: " << score << endl;
	cout << "Address of score: " << &score << endl;
	cout << "Pointer ptr points to address: " << ptr << endl;

	return 0;
}