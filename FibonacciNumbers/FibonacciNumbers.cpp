﻿#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки терминала:
    system("chcp 1251 > nul");
    // Установка цвета фона терминала и цвета текста
    system("color 80");

    cout << endl;

    int fib1 = 1;                                                                    // Объявляем и инициализируем первое число из ряда Фибоначчи
    int fib2 = 1;                                                                    // Объявляем и инициализируем второе число из ряда Фибоначчи
    int count = 0;                                                                   // Объявляем и инициализируем счётчик итераций
    int num;                                                                         // Объявляем переменную для записи номера последовательности

    cout << " Введите номер последовательности Фибоначчи: ";                         // Запрашиваем номер последовательности
    cin >> num;                                                                      // Записываем номер последовательности в переменную num

    while (count < num - 2) {                                                        // При вводе номера 1 или 2 цикл не работает а выводится значение fib2
        int result = fib1 + fib2;                                                    // При вводе номера 3 и более сумма fib1 и fib2 присваивается локальной переменной result
        fib1 = fib2;                                                                 // Значение fib2 присваиваем fib1
        fib2 = result;                                                               // после этого значение result присваиваем fib2
        count++;                                                                     // производим инкремент счётчика
    }

    if (num > 46 || num < 1) {                                                       // Проверяем корректность ввода номера последовательности
        cout << " Введен некорректный номер последовательности Фибоначчи!" << endl;  // если не корректно введено выводим об этом сообщение
    }
    else {
        cout << " Число в последовательности Фибоначчи: " << fib2 << endl;           // иначе выводим результат вычисления в цикле
    }
    

    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}