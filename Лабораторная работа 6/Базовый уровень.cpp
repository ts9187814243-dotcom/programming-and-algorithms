#include <iostream>
#include <limits>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int SIZE = 8;  //Количество элементов в массиве
    int summ = 0;  //сумма элементов
    int arr[SIZE];
    cout << "Введите " << SIZE << " целых чисел:" << endl;  //Вывод строки
    for (int i = 0; i < SIZE; i++) {  //Цикл для ввода элементов массива
        cout << "arr[" << i << "] = ";  //Вывод строки
        cin >> arr[i];  //Ввод i-элемента массива
        while (cin.fail()) {    //цикл работает пока есть ошибка в типе данных
            cout << "Введите корректное целое число!\n ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  //Очистка буфера ввода
            cout << "arr[" << i << "] = ";  //Вывод строки
            cin >> arr[i];  //Новый запрос данных
        }
    }
    for (int n = 1; n < SIZE; n += 2) {  //Перебор нечётных элементов
        summ += arr[n];  //Сложение n-элемента с summ
    }
    cout << "Сумма элементов на нечётных индексах: " << summ << endl;  //Вывод суммы
}
