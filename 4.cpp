#include <iostream>
using namespace std;

// Функция для вычисления произведения чисел в заданном диапазоне
long long product(int start, int end) {
    long long result = 1;
    for (int i = start; i <= end; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    setlocale(LC_ALL, "RUS");
    // Произведение всех целых чисел от 8 до 15
    std::cout << "Произведение всех целых чисел от 8 до 15: " << product(8, 15) << std::endl;

    // Ввод числа a с клавиатуры
    int a;
    std::cout << "Введите число a (1 < a < 20): ";
    std::cin >> a;

    // Произведение всех целых чисел от a до 20
    std::cout << "Произведение всех целых чисел от " << a << " до 20: " << product(a, 20) << std::endl;

    // Ввод числа b с клавиатуры
    int b;
    std::cout << "Введите число b (1 < b < 20): ";
    std::cin >> b;

    // Произведение всех целых чисел от 1 до b
    std::cout << "Произведение всех целых чисел от 1 до " << b << ": " << product(1, b) << std::endl;

    // Ввод чисел a и b с клавиатуры
    std::cout << "Введите число a: ";
    std::cin >> a;
    std::cout << "Введите число b (b >= a): ";
    std::cin >> b;

    // Произведение всех целых чисел от a до b
    std::cout << "Произведение всех целых чисел от " << a << " до " << b << ": " << product(a, b) << std::endl;

    return 0;
}