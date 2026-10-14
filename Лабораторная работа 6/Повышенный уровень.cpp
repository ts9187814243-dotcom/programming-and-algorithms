#include <iostream>
#include <random>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int SIZE = 30;  //Количество элементов в массиве
    int count = SIZE;  
    int arr[SIZE];
    int num = 0;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 100); // диапазон от 0 до 100
    for (int i = 0; i < SIZE; i++) {  //Цикл для ввода элементов массива
        arr[i] = dis(gen);  //Заполнение случайными числами от 0 до 100
    }
    for (int n = 0; n < SIZE; n += 1) {  //Перебор  элементов
        cout << "arr[" << n << "] = ";  //Вывод строки
        cout << arr[n] << endl;  //Вывод n-элемента
        switch (arr[n]) {  
        case 0:
            count --;  //Определение количества элементов в конечном массиве
        }
    }
    vector<int> unnul(count);  //Инициализация массива с count-количеством элементов
    for (int i = 0; i < SIZE; i++) {  //Создание массива
        if (arr[i] != 0) {
            unnul[num] = arr[i];
            num++;
        }
    }
    cout << "Массив без нулей: " << endl;
    for (int n = 0; n < count; n += 1) {  //Вывод массива
        cout << "unnul[" << n << "] = " << unnul[n] << endl;
    }
}
