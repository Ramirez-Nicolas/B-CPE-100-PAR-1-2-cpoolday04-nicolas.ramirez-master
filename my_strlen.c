/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** 
*/
int my_strlen(char const *str)
{
    int c = 0;

    while (str[c] != '\0') {
        c = c + 1;
    }
    return c;
}
