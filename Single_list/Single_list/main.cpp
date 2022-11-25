#include <iostream>
#include <string>
#include "list.cpp"
using namespace std;

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "ru");

	List<int> lst;

	int numbersCount = rand() % 10 + 3;
	cout << "numbersCount = " << numbersCount << endl;
	for (int i = 0; i < numbersCount; i++) {
		lst.push_back(rand() % 100);
	}

	for (int i = 0; i < lst.GetSize(); i++) {
		cout << lst[i] << endl;
	}

	cout << "=================================" << endl;
	lst.pop_front();
	cout << "numbersCount = " << lst.GetSize() << endl;

	for (int i = 0; i < lst.GetSize(); i++) {
		cout << lst[i] << endl;
	}

	system("pause");
	return 0;
}