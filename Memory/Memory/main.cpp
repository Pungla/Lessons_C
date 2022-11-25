#include <iostream>
using namespace std;

void Foo(int* pb, int* pc, int* pd) {
	*pb = 555;
	*pc = 321;
	*pd = -20;
}

int main() {
	// обычные числа
	{
		cout << "Ordinary numbers" << endl;
		int a = 5;
		int* px1 = &a;

		cout << "px1 address\t" << px1 << endl;
		cout << "px1 number\t" << *px1 << endl; //разименование

		int* px2 = &a;
		cout << "px2 address\t" << px2 << endl;
		cout << "px2 number\t" << *px2 << endl;

		*px2 = 2;
		cout << "a address\t" << &a << endl;
		cout << "a number\t" << a << endl;
	} 
	// массив
	{
		cout << "\n\n" << "Array" << endl;
		const int SIZE = 5;
		int arr[SIZE]{ 3,56,87,1,62 };

		for (int i = 0; i < SIZE; i++) {
			cout << "arr[" << i << "]= " << arr[i] << "\t";
		}
		cout << endl;
		int* pArr = arr;
		cout << "======================================================================" << endl;
		cout << "arr\t" << arr << endl;
		cout << "pArr\t" << pArr << endl;
		cout << "======================================================================" << endl;

		for (int i = 0; i < SIZE; i++) {
			cout << "pArr[" << i << "]= " << pArr[i] << "\t";
		}
		cout << endl;
	}
	// передача указателей в функцию
	{
		cout << "\n\n" << "Function" << endl;
		int b = 0, c = 123, d = -4;

		cout << "b= " << b << "\tc= " << c << "\td= " << d << endl;
		Foo(&b, &c, &d);
		cout << "======================" << endl;
		cout << "b= " << b << "\tc= " << c << "\td= " << d << endl;
	}
}