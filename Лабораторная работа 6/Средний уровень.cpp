#include <iostream>
#include <random>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int SIZE = 20;  //Количество элементов в массиве
    int count = 0;  //сумма элементов
    int arr[SIZE];
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(-99, 99); // диапазон от -99 до 99
    for (int i = 0; i < SIZE; i++) {  //Цикл для ввода элементов массива
        arr[i] = dis(gen);  //Заполнение случайными числами от -99 до 99
    }
    for (int n = 0; n < SIZE; n += 1) {  //Перебор  элементов
        cout << "arr[" << n << "] = ";  //Вывод строки
        cout << arr[n] << endl;  //Вывод n-элемента
        switch (arr[n]) {  //Сравнение элемента с квадратами
        case 1:
        case 4:
        case 9:
        case 16:
        case 25:
        case 36:
        case 49:
        case 64:
        case 81:
            count++;  //Фиксация количества
        }
    }
    cout << "количество элементов, являющихся точными квадратами: " << count << endl;  //Вывод количества
}
