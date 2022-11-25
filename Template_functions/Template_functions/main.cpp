#include <iostream>
using namespace std;

template <typename T1, typename T2>
void Summ(T1 a, T2 b) {
	cout<< a + b << endl;
}

template <typename T> 
T Sum(T a, T b) {
	return a + b;
}

int main() {
	cout << Sum(5, 10) << endl;

	cout << Sum(12.54, 32.87) << endl;

	Summ(12.54, 5);

	Summ(12, 5.534);
}