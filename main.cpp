#include <iostream>
#include <string>

using namespace std;

int main() {

	system("pause");
	return 0;
    #include <iostream>

    using namespace std;

    int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }

    int main() {
        int num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        int result = gcd(num1, num2);
        cout << "Greatest Common Divisor: " << result << endl;
        return 0;
    }
}