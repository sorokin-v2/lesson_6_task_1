#include "math_func.h"
#include <iostream>

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

