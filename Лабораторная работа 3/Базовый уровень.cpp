#include <iostream>
using namespace std;  //Подключение пространства имён

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Проверка на цифру" << '\n'; //Вывод строки
    char cymbol;
    cout << "Введите символ" << '\n';  //Вывод строки
    cin >> cymbol;  //Ввод символа
    if (cymbol >= '0' && cymbol <= '9') {  //Условие, если cymbol >=0 и <=9
        cout << "Цифра" << endl; 
    }
    else {   //Если символ не удовлетворяет условию, запускается следующий код:
        cout << "Не цифра" << endl;
    }
    return 0;
}
