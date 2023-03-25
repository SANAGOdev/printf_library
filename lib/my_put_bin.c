/*
** EPITECH PROJECT, 2022
** printf_lib
** File description:
** my_put_bin.c
*/

#include "my.h"

void my_put_bin(unsigned int n)
{
    char buffer[32 + 1];
    buffer[32] = '\0';
    char *a = binary(n, buffer);
    printf("%s\n", a);
}
