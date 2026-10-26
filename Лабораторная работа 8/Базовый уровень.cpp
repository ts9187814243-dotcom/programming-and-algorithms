#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string s;  //Инициализация
    cout << "Введите строку: ";   //Вывод строки
    getline(cin, s);  //Ввод строки
    int len1 = s.length();  //Расчет длины строки
    for (int i = 0; i < len1; i++) {  //Перебор символов
        if (s[i] == ' ') { //Проверка на пробел
            s[i] = '_';  //Замена
        }
    }
    cout << s << endl;   //Вывод строки
    return 0;
}
