#include<iostream>
using namespace std;

/*

\b �������� ���������� ����������� �������
\n ������� �� ������ ����� ������
\t ������� � ��������� ������� ���������

|||||||||||||||||||||||||||||

\\ ������� �������� ����� \
\" ������� ������� ������� "
\' ������� ��������� ������� '

*/

void main() {

	cout << "Hellow World!"<<endl;
	setlocale(LC_ALL, "Rus");
	cout << "������!" << endl;
	cout << "������!\n";

	int a = 5, b = 10;
	cout << a << " " << b << endl;

	const int COUNT_DAYS_IN_WEEK = 7;
	const char NEW_LINE = '\n';

	cout << COUNT_DAYS_IN_WEEK << "\n";
	cout << COUNT_DAYS_IN_WEEK << NEW_LINE;

	//int Var;
	//cout << "������� �����: ";
	//cin >> Var;
	//cout << "�� ����� �����: " << Var;

	int ch = -43;
	cout << ch << '\t';
	ch = -ch;
	cout << ch << '\n';

	int arr[]{ 11,23,543,56,75 };
	//sizeof(arr)/sizeof(arr[0]);
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		cout << arr[i] << endl;
	}

	/*double sum = 0;
	for (int i = 1; i < INT_MAX; i++) {
		double b = 1.f / i;
		sum = sum + b;
	}
	cout << sum << endl;*/


}