#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int count = 0;
    string s;  //Инициализация
    cout << "Введите строку: ";   //Вывод строки
    getline(cin, s);  //Ввод строки
    int len1 = s.length();  //Расчет длины строки
    for (int i = 0; i < len1; i++) {  //Перебор символов
        if (s[i] == 'e' || s[i] == 'E' || s[i] == 'е' || s[i] == 'Е') { //Проверка на букву
            count +=1;  //Подсчёт
        }
    }
    cout << "Количество 'е' и 'Е' равно: " << count << endl;   //Вывод строки
    return 0;
}
