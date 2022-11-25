#include <iostream>
using namespace std;

void Foo1(int value) {
	value = 2;
}

void Foo2(int &value) {
	value = 325;
}

void Foo3(int *value) {
	*value = -56;
}

int main() {
	// numbers
	{
		int a = 5;
		int* pa = &a;

		int& aRef = a;

		cout << "*pa\t" << *pa << endl;
		cout << "pa\t" << pa << endl;
		cout << "=============" << endl;
		cout << "aRef\t" << aRef << endl;
		cout << "&aRef\t" << &aRef << endl;

		cout << "=============" << endl;
		aRef = aRef + 3;
		cout << "aRef\t" << aRef << endl;
		cout << "&aRef\t" << &aRef << endl;

		cout << "=============" << endl;
		cout << "*pa\t" << *pa << endl;
		cout << "pa\t" << pa << endl;
		cout << "\n\n\n" << endl;
	}
	// function
	{
		int value = 5;
		cout << "First:" << endl;
		cout << "value = " << value << endl;
		cout << "=============" << endl;

		cout << "Foo1():" << endl;
		Foo1(value);
		cout << "value = " << value << endl;
		cout << "=============" << endl;

		cout << "Foo2():" << endl;
		Foo2(value);
		cout << "value = " << value << endl;
		cout << "=============" << endl;

		cout << "Foo3():" << endl;
		Foo3(&value);
		cout << "value = " << value << endl;
		system("pause");
	}
}