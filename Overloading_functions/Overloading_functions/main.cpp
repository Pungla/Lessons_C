#include <iostream>
using namespace std;

int Sum(int a, int b, int c) {
	return a + b + c;
}

int Sum(int a, int b) {
	return a + b;
}

double Sum(double a, double b) {
	return a + b;
}

int main() {
	cout << Sum(5, 6) << endl;

	cout << Sum(3.12, 65.89) << endl;

	cout << Sum(3, 7, 100) << endl;
}