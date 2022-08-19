#include <iostream>
#include <cmath>
#include "math_func.h"


int main()
{
    setlocale(LC_ALL, "Russian");
    int val1 = 0;
    std::cout << "Введите первое число: ";
    std::cin >> val1;
    int val2 = 0;
    std::cout << "Введите второе число: ";
    std::cin >> val2;
    std::cout << " (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    int operation = 0;
    std::cin >> operation;
    switch (operation)
    {
        case 1:
        {
            std::cout << val1 <<" + " << val2 << " = " << add(val1, val2) << std::endl;
            break;
        }
        case 2:
        {
            std::cout << val1 << " - " << val2 << " = " << sub(val1, val2) << std::endl;
            break;
        }
        case 3:
        {
            std::cout << val1 << " * " << val2 << " = " << mul(val1, val2) << std::endl;
            break;
        }
        case 4:
        {
            if (val2 != 0) std::cout << val1 << " / " << val2 << " = " << division(val1, val2) << std::endl;
            else std::cout << "Деление на 0 !";
            break;
        }
        case 5:
        {
            std::cout << val1 << " в степени " << val2 << " = " << exp(val1, val2) << std::endl;
            break;
        }
        default:
        {
            std::cout << "Неизвестная операция " << operation << std::endl;
        }
            
    }
}

