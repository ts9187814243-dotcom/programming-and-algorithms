#include <iostream>
using namespace std;

double circumference(double radius) {  //Объявление функции
    const double pi = 3.14;  //Число пи
    double length = 2 * pi * radius; //Расчет длины
    return length;  //Возврат значения
}
int main()
{
    double r;  //Объявление переменной
    setlocale(LC_ALL, "Russian");  //Подключение русского
    cout << "Введите радиус окружности:";  //Вывод строки
    cin >> r;  //Ввод значения
    cout << "Длина окружности равна:" << circumference(r) << endl;  //Вывод строки
    return 0;
}
