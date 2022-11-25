#include <iostream>
using namespace std;

int main() {
	int rows = 4;
	int cols = 5;

	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 100;
			cout << "[" << i << "][" << j << "]= " << arr[i][j] << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < rows; i++) {
		delete[] arr[i];
	}
	delete[] arr;
	system("pause");
}