#include <iostream>
#include <limits>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Сумма и произведение цифр целого числа" << '\n'; //Вывод строки
    long long sum, proiz, number, number1;  //Введение переменных number , number1 ,  sum, prois. Выбран long long для работы с большими числами
    sum = 0;
    proiz = 1;
    cout << "Введите число: ";  //Вывод строки
    cin >> number;  //Ввод переменной number

    while (cin.fail() or number <= 0) { //Пока вводятся неверные данные, цикл работает
        cout << "Число должно быть положительным и не равным нулю!" << '\n';  //Вывод строки
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Очистка буфера ввода
        cout << "Введите число: ";  //Вывод строки
        cin >> number;  //Ввод переменной number
    }

    number1 = number;

    while (number1 > 0) { //Пока цифры в числе не закончатся, цикл работает
        sum = sum + (number1 - (number1 / 10) * 10);
        proiz = proiz  * (number1 - (number1 / 10) * 10);
        number1 = (number1 - (static_cast<long long>(number1) % 10)) /10;  //Приводим к целочисленному типу, чятобы "%" работал
    }
    cout << "Сумма цифр введённого числа равна " << sum << endl; //Вывод среднего арифметического
    cout << "Произведение цифр введённого чисела равно " << proiz << endl; //Вывод среднего арифметического
    return 0;
}