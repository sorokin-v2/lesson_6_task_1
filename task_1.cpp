#include <iostream>
#include <cmath>
#include "math_func.h"

int add(int val1, int val2)
{
    return val1 + val2;
}

int sub(int val1, int val2)
{
    return val1 - val2;
}

int mul(int val1, int val2)
{
    return val1 * val2;
}

double division(int val1, int val2)
{
    if (val2 != 0) return static_cast<double>(val1) / val2;
    else
    {
        std::cout << "Делитель = 0!";
        return 0.;
    }
}

double exp(int val1, int val2)
{
    return pow(val1, val2);
}


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

