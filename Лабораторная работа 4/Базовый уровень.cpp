#include <iostream>
using namespace std;  //Подключение пространства имён std

int main()
{
	setlocale(LC_ALL, "Russian");
	int number; //Ввод переменной
	cout << "Введите число (1-5): ";  //Вывод строки
	cin >> number;  //Ввод данных
	switch (number) {
	case 1: //Сравнение с 1
		cout << "I"; //Вывод строки
		break;
	case 2: //Сравнение с 2
		cout << "II"; //Вывод строки
		break;
	case 3: //Сравнение с 3
		cout << "III"; //Вывод строки
		break;
	case 4: //Сравнение с 4
		cout << "IV"; //Вывод строки
		break;
	case 5: //Сравнение с 5
		cout << "V"; //Вывод строки
		break;
	default:  //Если не одно равенство не выполняется, запускается следующий алгоритм
		cout << "Число должно быть в диапазоне от 1 до 5" << endl; //Вывод строки
	}
	return 0;
}
