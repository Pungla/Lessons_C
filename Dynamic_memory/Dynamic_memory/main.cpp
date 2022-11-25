#include <iostream>
using namespace std;

int main() {
	int* pa = new int;
	cout << "pa=\t" << pa << endl << "*pa=\t" << *pa << endl;
	cout << "====================" << endl;

	*pa = 10;
	cout << "pa=\t" << pa << endl << "*pa=\t" << *pa << endl;
	cout << "====================" << endl;

	delete pa;
	cout << "delete\t" << pa << endl;
	cout << "====================" << endl;

	pa = NULL;
	cout << "NULL\t" << pa << endl;
	system("pause");
}