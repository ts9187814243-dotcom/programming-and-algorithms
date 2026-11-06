#include <iostream>
#include <limits>
#include <numeric>
using namespace std;

int gcd(int a, int b) {  //Объявление функции
    while (b != 0) {  //Расчет НОД
        int r = a % b;
        a = b;
        b = r;
    }
    return a;  //Возврат значения
}
int main()
{
    int x, y;  //Объявление переменных
    setlocale(LC_ALL, "Russian");  //Подключение русского
    cout << "Введите число a: ";  //Вывод строки
    cin >> x;  //Ввод значения
    while (cin.fail() || x <= 0) { //Пока вводятся неверные данные, цикл работает
        cout << "Введите корректное число!" << '\n';  //Вывод строки
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Очистка буфера ввода
        cout << "Введите число a: ";  //Вывод строки
        cin >> x;  //Ввод переменной 
    }
    cout << "Введите число b: ";  //Вывод строки
    cin >> y;  //Ввод значения
    while (cin.fail() || y <= 0) { //Пока вводятся неверные данные, цикл работает
        cout << "Введите корректное число!" << '\n';  //Вывод строки
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Очистка буфера ввода
        cout << "Введите число b: ";  //Вывод строки
        cin >> y;  //Ввод переменной 
    }
    cout << "НОД равен: " << gcd(x, y) << endl;  //Вывод строки
    return 0;
}

