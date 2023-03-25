/*
** EPITECH PROJECT, 2022
** printf_lib
** File description:
** my_putchar.c
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
