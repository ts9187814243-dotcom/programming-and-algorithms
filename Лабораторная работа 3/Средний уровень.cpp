#include <iostream>
using namespace std;  //Подключение пространства имён

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Определение рода символа" << '\n'; //Вывод строки
    char cymbol;  //Ввод переменных
    cout << "Введите символ" << '\n';  //Вывод строки
    cin >> cymbol;  //Ввод данных
    if (cymbol == 'a' || cymbol == 'A' || cymbol == 'E' || cymbol == 'e' || cymbol == 'y' || cymbol == 'Y' || cymbol == 'u' || cymbol == 'U' || cymbol == 'I' || cymbol == 'i' || cymbol == 'o' || cymbol == 'O') {  //Проверка на гласную
        cout << "Гласная буква" << endl;
    }
    else if (cymbol == 'b' || cymbol == 'B' || //Проверка на согласную
        cymbol == 'c' || cymbol == 'C' ||
        cymbol == 'd' || cymbol == 'D' ||
        cymbol == 'f' || cymbol == 'F' ||
        cymbol == 'g' || cymbol == 'G' ||
        cymbol == 'h' || cymbol == 'H' ||
        cymbol == 'j' || cymbol == 'J' ||
        cymbol == 'k' || cymbol == 'K' ||
        cymbol == 'l' || cymbol == 'L' ||
        cymbol == 'm' || cymbol == 'M' ||
        cymbol == 'n' || cymbol == 'N' ||
        cymbol == 'p' || cymbol == 'P' ||
        cymbol == 'q' || cymbol == 'Q' ||
        cymbol == 'r' || cymbol == 'R' ||
        cymbol == 's' || cymbol == 'S' ||
        cymbol == 't' || cymbol == 'T' ||
        cymbol == 'v' || cymbol == 'V' ||
        cymbol == 'w' || cymbol == 'W' ||
        cymbol == 'x' || cymbol == 'X' ||
        cymbol == 'y' || cymbol == 'Y' ||
        cymbol == 'z' || cymbol == 'Z') {
        cout << "Согласная буква" << endl;
    }
    else if (cymbol >= '0' && cymbol <= '9') {  //Проверка на цифру
        cout << "Цифра" << endl;
    }
    else {
        cout << "Другой символ" << endl;
    }
    return 0;
}
