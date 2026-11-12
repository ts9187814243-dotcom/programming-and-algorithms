#include <iostream>
#include <limits>

using namespace std;
void inverse(double& value) {  //Определение функции
    value = 1 / value;  //Расчёт
}

int main()
{
    setlocale(LC_ALL, "Russian");
    double x;
    cout << "Введите число: ";
    cin >> x;
    while (cin.fail() || x == 0) { //Пока вводятся неверные данные, цикл работает
        cout << "Введите корректное число!" << '\n';  //Вывод строки
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Очистка буфера ввода
        cout << "Ваш выбор: ";  //Вывод строки
        cin >> x;  //Ввод переменной 
    }
    inverse(x);  //Вызов функции
    cout << "Обратное значение равно: " << x << endl;  //Вывод строки
}
