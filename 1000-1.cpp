#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL,"Russian");

	int s = 0;

	//Если ставить тут (;), то оператор заканчивает подсчёт и затем s = s + i добавляет ещё 1, и в ответе получается 1001//
	for (int i = 1; i <= 1000; i++) { 
		s += i;
	}

	cout << "Сумма чисел от 1 до 1000: " << s << endl;
	return 0;

}