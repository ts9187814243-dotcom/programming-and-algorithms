#include <iostream>
#include <limits>
#include <cmath> 
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Периметр прямоугольнка" << '\n'; //Вывод строки
    double a, b, arifm , geometr;  //Введение переменных a , b , arifm и geometr
    cout << "Введите число a: ";  //Вывод строки
    cin >> a;  //Ввод переменной a
    while (cin.fail() or a <= 0) { //Пока вводятся неверные данные, цикл работает
        cout << "Введите корректные данные!" << '\n';  //Вывод строки
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Очистка буфера ввода
        cout << "Введите число a: ";  //Вывод строки
        cin >> a;  //Ввод переменной a
    }
    cout << "Введите число b: "; //Вывод строки
    cin >> b; //Ввод данных в переменную b
    while (cin.fail() or b <= 0) { //Пока вводятся неверные данные, цикл работает
        cout << "Введите корректные данные!" << '\n';  //Вывод строки
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Очистка буфера ввода
        cout << "Введите число b: ";  //Вывод строки
        cin >> b;  //Ввод переменной b
    }
    arifm = static_cast<double>(a + b) / 2;  //Расчет среднего арифметического
    geometr = sqrt(a * b);  //Рвсчёт среднего геометрического
    cout << "Среднее арифметическое введённых чисел равно" << arifm << endl; //Вывод среднего арифметического
    cout << "Среднее геометрическое введённых чисел равно" << geometr << endl; //Вывод среднего арифметического
    return 0;
}