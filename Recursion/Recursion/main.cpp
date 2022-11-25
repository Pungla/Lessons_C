#include <iostream>
using namespace std;

int Foo(int a) {
	if (a < 1)
		return 0;

	cout << a << ' ';
	a--;
	//return Foo(a);
	Foo(a);
}

int Fact(int a) {
	if (a == 0)
		return 0;
	if (a == 1)
		return 1;
	return a * Fact(a - 1);
}

int main() {

	Foo(10);
	cout << '\n';

	cout << Fact(5) << endl;
}