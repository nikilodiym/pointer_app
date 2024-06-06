#include <iostream>
#include <string>

using namespace std;

int sum_between_a_and_b(int a, int b) {
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;
	}
	return sum;
}

int main() {
	int num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;

	cout << "Enter the second number: ";
	cin >> num2;

	int result = sum_between_a_and_b(num1, num2);
	cout << "Sum between " << num1 << " and " << num2 << " is " << result << endl;

	system("pause");
	return 0;
}