#include<iostream>
using namespace std;

int main() {
	int num = 0;
	int i = 1;
	do {
		num += i;
		i++;
	} while (i <= 100);
	cout << "Do - while: " << num << endl;
}