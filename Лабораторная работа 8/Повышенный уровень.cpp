#include <iostream>
#include <limits>
#include <string>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    string s;
    int width;
    cout << "Введите строку: ";
    getline(cin, s);
    int len1 = static_cast<int>(s.length());  //Определение длины строки
    cout << "Введите ширину строки (не меньше длины): ";
    cin >> width;
    while (cin.fail() || len1 > width) {    //цикл работает пока есть ошибка в типе данных
        cout << "Число должно быть не меньше длины строки!\n ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  //Очистка буфера ввода
        cout << "Введите ширину строки: ";  //Вывод строки
        cin >> width;  //Новый запрос данных
    }
    string result(width - len1, ' ');  //Создание новой строки с пробелами
    result += s;  //Сложение строк
    cout << "Результат: \"" << result << "\"" << endl;  //Вывод результата

    return 0;
}
