#include <iostream>
using namespace std;

int main() {
	srand(time(NULL));
	int size = 5;

	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
		cout << arr + i << "\t";
		cout << arr[i] << endl;
	}

	delete[] arr;
	system("pause");
}