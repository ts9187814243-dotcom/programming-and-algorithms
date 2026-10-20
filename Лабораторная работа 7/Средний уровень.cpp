#include <iostream>
#include <iomanip>
#include <random>
#include <limits>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int ROWS = 4;  //Количество строк
    const int COLS = 6;  //Количество столбцов
    int matrix[ROWS][COLS];  //Инициализация матрицы
    int count = 0;  //Переменная для количества подходящих элементов
    double a, b;
    cout << "Введите начало интервала (a): ";
    cin >> a;
    while (cin.fail()) { //Пока вводятся неверные данные, цикл работает
        cout << "Введите корректное число!" << '\n';  //Вывод строки
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Очистка буфера ввода
        cout << "Введите начало интервала (a): ";  //Вывод строки
        cin >> a;  //Ввод переменной number
    }
    cout << "Введите конец интервала (b): ";
    cin >> b;
    while (cin.fail() || b <= a) { //Пока вводятся неверные данные, цикл работает
        cout << "Число b должно быть больше числа a!" << '\n';  //Вывод строки
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Очистка буфера ввода
        cout << "Введите конец интервала (b): ";  //Вывод строки
        cin >> b;  //Ввод переменной number
    }
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(-50, 50); // диапазон от -50 до 50
    for (int i = 0; i < ROWS; i++) {  //Цикл для ввода элементов матрицы
        cout << "("; //Вывод строки
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = dis(gen);  //Заполнение случайными числами от -50 до 50
            if (matrix[i][j] >= a && matrix[i][j] <= b) {  //Определение принадлежности к интервалу
                count += 1;
            }
            if (j == 5) {  //Условия для выставления пробелов между элементами
                cout << setw(3) << matrix[i][j];
            }
            else {
                cout << setw(3) << matrix[i][j] << "  ";
            }
        }
        cout << ")" << endl;  //Вывод строки
    }
    cout << "Количество элементов матрицы на интеравле [" << a << ";" << b << "]: " << count << endl;  //Вывод строки
    return 0;
}
