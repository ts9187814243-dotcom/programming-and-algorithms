#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, h;
    cout << "Введите начало интервала a: ";
    cin >> a;
    while (cin.fail
    ()) {    //цикл работает пока есть ошибка в типе данных
        cout << "Введите корректное число!\n ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  //Очистка буфера ввода
        cout << "Введите начало интервала a: ";  //Вывод строки
        cin >> a;  //Новый запрос данных
    }
    cout << "Введите конец нитервала b: ";
    cin >> b;
    while (cin.fail() || a > b) {    //цикл работает пока есть ошибка в типе данных
        cout << "Введите корректное число (b >= a)!\n ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  //Очистка буфера ввода
        cout << "Введите конец нитервала b: ";  //Вывод строки
        cin >> b;  //Новый запрос данных
    }
    cout << "Введите шаг h:";
    cin >> h;
    while (cin.fail
    () || h <= 0) {    //цикл работает пока есть ошибка в типе данных
        cout << "Введите корректное число (h > 0)!\n ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  //Очистка буфера ввода
        cout << "Введите шаг h: ";  //Вывод строки
        cin >> h;  //Новый запрос данных
    }
    cout << "======================" << endl;
    cout << "     x   |y = -3x + 10" << endl;
    cout << "======================" << endl;
    cout << fixed << setprecision(4);
    for (double x = a; x <= b + 1e-9; x = x + h) {
        double y = -3 * x + 10; // Вычисление значения функции
        cout << setw(8) << x << " | " << setw(11) << y << endl;
    }
    cout << "======================" << endl;
    return 0;
}
