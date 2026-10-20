#include <iostream>
#include <iomanip>
#include <random>
#include <limits>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int ROWS = 6;  //Количество строк
    const int COLS = 6;  //Количество столбцов
    int matrix[ROWS][COLS];  //Инициализация матрицы
    int matr[ROWS][COLS - 1];
    int a;
    cout << "Введите номер удаляемого столбца (1-6): ";
    cin >> a;
    while (cin.fail() || a < 1 || a > 6) { //Пока вводятся неверные данные, цикл работает
        cout << "Введите корректное число!" << '\n';  //Вывод строки
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Очистка буфера ввода
        cout << "Введите начало интервала (a): ";  //Вывод строки
        cin >> a;  //Ввод переменной number
    }
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(-50, 50); // диапазон от -50 до 50
    cout << "Начальная матрица:" << endl;
    for (int i = 0; i < ROWS; i++) {  //Цикл для ввода элементов матрицы
        cout << "("; //Вывод строки
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = dis(gen);  //Заполнение случайными числами от -50 до 50
            if (j == COLS - 1) {  //Условия для выставления пробелов между элементами
                cout << setw(3) << matrix[i][j];
            }
            else {
                cout << setw(3) << matrix[i][j] << "  ";
            }
            if (a - 1 != j) {  //Проверка на номер столбца
                if (j < a - 1) {
                    matr[i][j] = matrix[i][j];  //Если столбец идёт до удаляемой строки, то он остаётся на месте
                }
                else if (j > a - 1) {  //Если столбец идёт после удаляемой строки, то он сдвигается влево
                    matr[i][j - 1] = matrix[i][j];
                }

            }
        }
        cout << ")" << endl;  //Вывод строки
    }
    cout << "Конечная матрица:" << endl;
    for (int i = 0; i < ROWS; i++) {  //Цикл для ввода элементов матрицы
        cout << "("; //Вывод строки
        for (int j = 0; j < COLS - 1; j++) {           
            if (j == COLS - 2) {  //Условия для выставления пробелов между элементами
                cout << setw(3) << matr[i][j];
            }
            else {
                cout << setw(3) << matr[i][j] << "  ";
            }
        }
        cout << ")" << endl;  //Вывод строки
    }
    return 0;
}
