#include <iostream>
#include <limits>
#include <string>
using namespace std;

string decToBase(long long num, int base) {  //Функция для преобразования из десятиричной системы
    const string digits = "0123456789ABCDEF";
    if (num == 0) return "0";
    string res = "";
    while (num > 0) {
        res = digits[num % base] + res;
        num /= base;
    }
    return res;
}
long long baseToDec(string s, int base) {  //Функция для преобразования в десятиричную систему
    return stoll(s, nullptr, base);
}
int main()
{
    int choice1, choice2 ;  //Объявление переменных
    setlocale(LC_ALL, "Russian");  //Подключение русского
    cout << "1.Из десятичной системы" << '\n';  //Вывод строки
    cout << "2.В десятичную систему" << '\n';  //Вывод строки
    cout << "Ваш выбор: ";  //Вывод строки
    cin >> choice1;
    while (cin.fail() || choice1 < 1 || choice1 > 2) { //Пока вводятся неверные данные, цикл работает
        cout << "Введите корректное число!" << '\n';  //Вывод строки
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Очистка буфера ввода
        cout << "Ваш выбор: ";  //Вывод строки
        cin >> choice1;  //Ввод переменной 
    }
    switch (choice1) {
    case 1: {
        long long number;
        cout << "Введите число: ";  //Вывод строки
        cin >> number;
        while (cin.fail() || number < 0) {  //Проверка значений
            cout << "Введите корректное. положительное число!" << '\n';
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Введите число: ";
            cin >> number;
        }
        cout << "1.В двоичную систему" << '\n';
        cout << "2.В восьмеричную систему" << '\n';
        cout << "3.В шестнадцатеричную систему" << '\n';
        cout << "Ваш выбор: ";  //Вывод строки
        cin >> choice2;
        while (cin.fail() || choice2 < 1 || choice2 > 3) { //Пока вводятся неверные данные, цикл работает
            cout << "Введите корректное число!" << '\n';  //Вывод строки
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Очистка буфера ввода
            cout << "Ваш выбор: ";  //Вывод строки
            cin >> choice2;  //Ввод переменной 
        }
        switch (choice2) {
        case 1:
            cout << "Ваше число в двоичной системе: " << decToBase(number, 2) << '\n';  //Вывод строки
            break;
        case 2:
            cout << "Ваше число в восьмеричной системе: " << decToBase(number, 8) << '\n';  //Вывод строки
            break;
        case 3:
            cout << "Ваше число в шестнадцатеричной системе: " << decToBase(number, 16) << '\n';  //Вывод строки
            break;
        }
        break;
    }
    case 2: {
        string number1;
        cout << "Введите число: ";  //Вывод строки
        cin >> number1;
        cout << "1.Из двоичной системы" << '\n';
        cout << "2.Из восьмеричной системы" << '\n';
        cout << "3.Из шестнадцатеричной системы" << '\n';
        cout << "Ваш выбор: ";  //Вывод строки
        cin >> choice2;
        while (cin.fail() || choice2 < 1 || choice2 > 3) { //Пока вводятся неверные данные, цикл работает
            cout << "Введите корректное число!" << '\n';  //Вывод строки
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Очистка буфера ввода
            cout << "Ваш выбор: ";  //Вывод строки
            cin >> choice2;  //Ввод переменной 
        }
        switch (choice2) {
        case 1:
            cout << "Ваше число в десятичной системе: " << baseToDec(number1, 2) << '\n';  //Вывод строки
            break;
        case 2:
            cout << "Ваше число в десятичной системе: " << baseToDec(number1, 8) << '\n';  //Вывод строки
            break;
        case 3:
            cout << "Ваше число в десятичной системе: " << baseToDec(number1, 16) << '\n';  //Вывод строки
            break;
        }
        break;
    }
    }
   
    return 0;
}

