// TODO: แสดงค่าทุกตัวใน array โดยใช้ pointer เท่านั้น
#include <iostream>
using namespace std;
int main() {
	int arr[] = { 10, 20, 30, 40 };
	int* p = arr;
	// TODO
	cout << arr[0] << "\t";
	cout << arr[1] << "\t";
	cout << arr[2] << "\t";
	cout << arr[3] << "\t";
	
	cout << "\n";

	cout << *(p + 0) << "\t";
	cout << *(p + 1) << "\t";
	cout << *(p + 2) << "\t";
	cout << *(p + 3) << "\t";
	cout << "\nfor loop\n";
	for (int i = 0; i < 4; i++) {
		cout << *(p + i) << "\t";
	}
	return 0;
}