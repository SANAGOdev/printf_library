/*
** EPITECH PROJECT, 2022
** printf_lib
** File description:
** binary_convert.c
*/

#include "my.h"

char *binary(unsigned n, char buffer[])
{
    char *ptr = buffer + 32;
    do {
        *(--ptr) = (n & 1) + '0';
        n >>= 1;
    } while (n);
    return ptr;
}
