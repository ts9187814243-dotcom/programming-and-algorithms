
#include <iostream>
#include <limits>
using namespace std;
// Структура узла связанного списка
struct Node {
    int data;
    Node* next;
};
// Вставка элемента в конец списка
void insertNode(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    // Если список пустой, новый узел становится первым
    if (head == nullptr) {
        head = newNode;
        return;
    }
    // Переходим к последнему элементу
    Node* current = head;

    while (current->next != nullptr) {
        current = current->next;
    }

    // Добавляем новый узел в конец
    current->next = newNode;
}
// Удаление элемента по значению
bool deleteNode(Node*& head, int value) {
    // Проверяем, пуст ли список
    if (head == nullptr) {
        return false;
    }
    // Если удаляемый элемент находится в начале списка
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return true;
    }
    // Ищем элемент в остальной части списка
    Node* current = head;
    while (current->next != nullptr) {
        if (current->next->data == value) {
            Node* temp = current->next;
            current->next = temp->next;
            delete temp;
            return true;
        }
        current = current->next;
    }
    return false;
}
// Поиск элемента в списке
bool searchNode(Node*& head, int value) {
    Node* current = head;

    while (current != nullptr) {
        if (current->data == value) {
            return true;
        }

        current = current->next;
    }
    return false;
}
// Вывод всех элементов списка
void printList(Node* head) {
    if (head == nullptr) {
        cout << "Список пуст." << endl;
        return;
    }
    Node* current = head;
    cout << "Список: ";
    while (current != nullptr) {
        cout << current->data;

        if (current->next != nullptr) {
            cout << " -> ";
        }
        current = current->next;
    }
    cout << " -> nullptr" << endl;
}
int main() {
    setlocale(LC_ALL, "Russian");
    Node* head = nullptr;
    int choice;
    int value;
    do {
        cout << "1. Добавить элемент" << endl;
        cout << "2. Удалить элемент" << endl;
        cout << "3. Найти элемент" << endl;
        cout << "4. Вывести список" << endl;
        cout << "0. Выход" << endl;
        cout << "Выберите действие: ";

        if (!(cin >> choice)) {
            cout << "Ошибка ввода. Введите число." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {
        case 1:
            cout << "Введите значение: ";

            if (cin >> value) {
                insertNode(head, value);
                cout << "Элемент добавлен." << endl;
            }
            else {
                cout << "Ошибка ввода." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            break;

        case 2:
            cout << "Введите значение для удаления: ";

            if (cin >> value) {
                if (deleteNode(head, value)) {
                    cout << "Элемент удален." << endl;
                }
                else {
                    cout << "Элемент не найден." << endl;
                }
            }
            else {
                cout << "Ошибка ввода." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            break;

        case 3:
            cout << "Введите значение для поиска: ";

            if (cin >> value) {
                if (searchNode(head, value)) {
                    cout << "Элемент найден." << endl;
                }
                else {
                    cout << "Элемент не найден." << endl;
                }
            }
            else {
                cout << "Ошибка ввода." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            break;

        case 4:
            printList(head);
            break;

        case 0:
            cout << "Завершение программы." << endl;
            break;

        default:
            cout << "Неверный пункт меню." << endl;
        }

    } while (choice != 0);

    return 0;
}
