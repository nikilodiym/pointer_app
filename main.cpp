#include <iostream>
#include <string>

using namespace std;

void stars(int n) {
	if (n >= 0) {
		cout << "*";
		stars(n - 1);
	}
}

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	stars(n);
	cout << endl;

	system("pause");
	return 0;
}