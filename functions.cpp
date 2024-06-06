#include "functions.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>

void FillArray(int array[], int const SIZE)
{
    for (int i = 0; i < SIZE; i++) //��������� ������
    {
        array[i] = rand() % 10; //������ ���������� ���������� ������� �� 0 �� 10, �������� 10 ����� ������
    }
}

void PrintArray(int array[], int const SIZE)
{
    for (int i = 0; i < SIZE; i++) //����� � ������� ������������ �������
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int MonotoneSequence(int array[], int const SIZE)
{
    int count = 0; //������� ��� ������������ ��������
    bool check = false;
    for (int i = 1; i < SIZE; i++) //������� � ������
    {
        if (array[i] > array[i - 1]) // ���������, ��� ������� ����� ������ �����������
        {
            if (!check)
                count++; // ����������� �������
            check = true;
        }
        else
            check = false;
    }
    return count;
}