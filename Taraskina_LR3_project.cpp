#include <iostream>
#include <cmath> // Для функции округления
using namespace std;

double numberX() {
    double x;
    cin >> x;
    return x;
}

double numberY() {
    double y;
    cin >> y;
    return y;
}

double numberZ() {
    double z;
    cin >> z;
    return z;
}

double DrobPart(double summ) {
    return summ - static_cast<int>(summ);
}

int Okruglenie(double summ) {
    return static_cast<int>(round(summ));
}

int main() {
    setlocale(LC_ALL, "rus");
    double x , y , z ; // Инициализация переменных
    int menu;

    do {
        cout << "Task 1. Ввести вещественное число x" << endl;
        cout << "Task 2. Ввести вещественное число y" << endl;
        cout << "Task 3. Ввести вещественное число z" << endl;
        cout << "Task 4. Найти дробную часть суммы x, y, z" << endl;
        cout << "Task 5. Округлить до ближайшего целого сумму этих 3-х чисел" << endl;
        cout << "Введите номер задачи (0 для выхода): ";
        cin >> menu;

        switch (menu) {
        case 1:
            cout << "Введите число x: ";
            x = numberX();
            break;
        case 2:
            cout << "Введите число y: ";
            y = numberY();
            break;
        case 3:
            cout << "Введите число z: ";
            z = numberZ();
            break;
        case 4: {
            double summ = x + y + z; // Вычисляем сумму здесь
            cout << "Дробная часть суммы: " << DrobPart(summ) << endl;
            break;
        }
        case 5: {
            double summ = x + y + z; // Вычисляем сумму здесь
            cout << "Округленная сумма: " << Okruglenie(summ) << endl;
            break;
        }
        case 0:
            cout << "Выход из приложения." << endl;
            break;
        default:
            cout << "Некорректный выбор. Пожалуйста, попробуйте снова." << endl;
        }
    } while (menu != 0);

    return 0;
}