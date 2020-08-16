#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
		cout << "Введите количество запросов\n";
	int iter, numOver = 0, need = 0;
	cin >> iter;
	system("cls");
	for (int i = 0; i < iter; i++) {
			cout << "Запрос номер " << i + 1 <<endl;
			cout << "Введите некоторое количество спичек\n";
			cin >>numOver;
		if (numOver % 2 == 0) {
			need = 0;
		}
		if (numOver == 2) {
			need = 2;
		}
		if (numOver % 2 != 0) {
			need = 1;
		}
		cout << "Необходимо докупить спичек в количестве " << need << endl;
		system("pause");
		system("cls");
	}
	
	return 0;
}
