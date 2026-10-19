#include <iostream>
#include <random>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int ROWS = 3;  //Количество строк
    const int COLS = 3;  //Количество столбцов
    int matrix[ROWS][COLS];  //Инициализация матрицы
    int summ = 0;  //Переменная для суммы
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(10, 99); // диапазон от 10 до 99
    for (int i = 0; i < ROWS; i++) {  //Цикл для ввода элементов матрицы
        cout << "("; //Вывод строки
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = dis(gen);  //Заполнение случайными числами от 10 до 99
            summ += matrix[i][j];  //Расчёт суммы
            if (j == 2) {  //Условия для выставления пробелов между элементами
                cout << matrix[i][j];
            }
            else {
                cout << matrix[i][j] << "  ";
            }
        }
        cout << ")" << endl;  //Вывод строки
    }
    cout << "Среднее арифметическое всех элементов: " << static_cast<double>(summ) / (ROWS * COLS) << endl;  //Вывод строки
    return 0;
}
