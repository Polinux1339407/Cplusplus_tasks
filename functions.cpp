#include "functions.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>

void FillArray(int array[], int const SIZE)
{
    for (int i = 0; i < SIZE; i++) //заполн€ем массив
    {
        array[i] = rand() % 10; //массив заполнитс€ рандомными числами от 0 до 10, значение 10 можно мен€ть
    }
}

void PrintArray(int array[], int const SIZE)
{
    for (int i = 0; i < SIZE; i++) //вывод в консоль заполненного массива
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int MonotoneSequence(int array[], int const SIZE)
{
    int count = 0; //счЄтчик дл€ возрастающих участков
    bool check = false;
    for (int i = 1; i < SIZE; i++) //заходим в массив
    {
        if (array[i] > array[i - 1]) // провер€ем, что текущее число меньше предыдущего
        {
            if (!check)
                count++; // увеличиваем счЄтчик
            check = true;
        }
        else
            check = false;
    }
    return count;
}