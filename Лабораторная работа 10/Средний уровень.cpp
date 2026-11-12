#include <iostream>
#include <limits>
#include <string>
using namespace std;
void reverseString(string& str) {  //Определение функции
    for (int i = 0; i < static_cast<int>(str.length()) / 2; i++) {
        char el = str[i];
        str[i] = str[str.length() - i - 1];
        str[str.length() - i - 1] = el;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    string s;
    cout << "Введите строку: ";
    getline(cin, s);
    reverseString(s);  //Вызов функции
    cout << "Реверс строки: " << s << endl;  //Вывод строки
}

