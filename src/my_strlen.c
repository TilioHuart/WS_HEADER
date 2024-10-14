/*
** EPITECH PROJECT, 2024
** day4
** File description:
** my_strlen.c
*/

#include <stdio.h>
#include <time.h>

ssize_t my_strlen(char const *str)
{
    int i = 0;

    if (str == NULL)
        return -1;
    while (str[i] != '\0') {
        i += 1;
    }
    return i;
}
