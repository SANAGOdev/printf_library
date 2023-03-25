/*
** EPITECH PROJECT, 2022
** printf_lib
** File description:
** my_putstr.c
*/

#include "my.h"

int my_putstr(char const *arr)
{
    int count = 0;
    while (arr[count] != '\0') {
        my_putchar(arr[count]);
        count = count + 1;
    }
    return count;
}
