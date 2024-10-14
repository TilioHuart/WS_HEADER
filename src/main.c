/*
** EPITECH PROJECT, 2024
** linked_list
** File description:
** main.c
*/

#include <stdio.h>
#include <stdlib.h>

/*
Pour cet exercice, vous devez faire en sorte d'utiliser des headers dans le but de retirer tous les warnings potentiels
Ainsi que les magic number
*/

int main(void)
{
    char str[] = "Hello\0";
    champion_t *champion = malloc(sizeof(champion_t));
    ssize_t find_len = -1; // PAS EXPLICITE

    if (champion == NULL)
        return 84;
    champion->key = 23;
    printf("champion->key = %d\n", champion->key);
    if (find_len == TRUE)
        printf("len de la str = %d\n", my_strlen(str));
    free(champion);
    return 0;
}
