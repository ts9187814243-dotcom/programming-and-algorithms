#include <iostream>
#include <limits>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Периметр прямоугольнка" << '\n'; //Вывод строки
    double a, b, perimeter;  //Введение переменных a , b и perimeter
    cout << "Введите длину стороны a: ";  //Вывод строки
    cin >> a;  //Ввод переменной a
    while (cin.fail() or a <= 0) { //Пока вводятся неверные данные, цикл работает
        cout << "Введите корректные данные!" << '\n';  //Вывод строки
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Очистка буфера ввода
        cout << "Введите длину стороны a: ";  //Вывод строки
        cin >> a;  //Ввод переменной a
    }
    cout << "Введите длину стороны b: "; //Вывод строки
    cin >> b; //Ввод данных в переменную b
    while (cin.fail() or b <= 0) { //Пока вводятся неверные данные, цикл работает
        cout << "Введите корректные данные!" << '\n';  //Вывод строки
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Очистка буфера ввода
        cout << "Введите длину стороны b: ";  //Вывод строки
        cin >> b;  //Ввод переменной b
    }
    perimeter = (a + b) * 2;  //Расчет периметра
    cout << "Периметр прямоугольника равен" << perimeter << endl; //Вывод искомого значения
    return 0;
}

