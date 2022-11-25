#include <iostream>
#include <string>
using namespace std;

int Foo1(int a) {
	return a - 1;
}

int Foo2(int a) {
	return a * 2;
}

string DataFromBD() {
	return "Data From BD";
}

string DataFromWebServer() {
	return "Data From WebServer";
}

void ShowInfo(string foo()) {
	cout << foo() << endl;
}

int main() {
	int(*fooPointer)(int a);

	fooPointer = Foo1;
	cout << fooPointer(5) << endl;

	fooPointer = Foo2;
	cout << fooPointer(5) << endl;

	ShowInfo(DataFromBD);
	ShowInfo(DataFromWebServer);
	system("pause");
}