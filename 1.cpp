#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    int X, Y, Z;

    // Ввод чисел X, Y, Z с клавиатуры
    cout << "Введите число X: ";
    cin >> X;
    cout << "Введите число Y: ";
    cin >> Y;
    cout << "Введите число Z: ";
    cin >> Z;

    // Проверка первого условия: каждое из чисел X и Y нечетное
    bool condition1 = (X % 2 != 0) && (Y % 2 != 0);

    // Проверка второго условия: только одно из чисел X и Y меньше 20
    bool condition2 = ((X < 20) && (Y >= 20)) || ((X >= 20) && (Y < 20));

    // Проверка третьего условия: хотя бы одно из чисел X и Y равно нулю
    bool condition3 = (X == 0) || (Y == 0);

    // Проверка четвертого условия: каждое из чисел X, Y, Z отрицательное
    bool condition4 = (X < 0) && (Y < 0) && (Z < 0);

    // Проверка пятого условия: только одно из чисел X, Y и Z кратно пяти
    bool condition5 = ((X % 5 == 0) && (Y % 5 != 0) && (Z % 5 != 0)) ||
        ((X % 5 != 0) && (Y % 5 == 0) && (Z % 5 != 0)) ||
        ((X % 5 != 0) && (Y % 5 != 0) && (Z % 5 == 0));

    // Проверка шестого условия: хотя бы одно из чисел X, Y, Z больше 100
    bool condition6 = (X > 100) || (Y > 100) || (Z > 100);

    // Общая проверка всех условий
    bool finalCondition = condition1 && condition2 && condition3 && condition4 && condition5 && condition6;

    // Вывод результата
    if (finalCondition) {
        cout << "condition is true" << endl;
    }
    else {
        cout << "condition is false" << endl;
    }

    return 0;
}