#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL,"Russian");

	int s = 0;

	//���� ������� ��� (;), �� �������� ����������� ������� � ����� s = s + i ��������� ��� 1, � � ������ ���������� 1001//
	for (int i = 1; i <= 1000; i++) { 
		s += i;
	}

	cout << "����� ����� �� 1 �� 1000: " << s << endl;
	return 0;

}