#include <iostream>
#include <string>

using namespace std;

int find(int base, int exponent) {
	if (exponent == 0) {
		return 1;
	}
	else if (exponent < 0) {
		return 1 / find(base, -exponent);
	}
	else {
		return base * find(base, exponent - 1);
	}
}


int main() {
	int base, exponent;
	cout << "Enter the base: ";
	cin >> base;
	cout << "Enter the exponent: ";
	cin >> exponent;

	int result = find(base, exponent);
	cout << base << " raised to the power of " << exponent << " is: " << result << endl;

	system("pause");
	return 0;
}