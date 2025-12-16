#include<iostream>
#include<string>
using namespace std;

int maxOfThree(int a, int b, int c) {
	int max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	return max;
}
 int main() {
	int a, b, c;	
	cout << "Enter three integers a ";
	cin >> a;
	cout << "Enter three integers b ";
	cin >> b;	
	cout << "Enter three integers c ";	
	cin >> c;

	int max = 0;
	max = maxOfThree(a, b, c);
	cout << "Maximum value is " << max << endl;	
	return 0;
}