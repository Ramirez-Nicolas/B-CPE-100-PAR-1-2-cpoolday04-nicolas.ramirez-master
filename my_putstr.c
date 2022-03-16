/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** 
*/
int my_putstr(char const *str)
{
    int c = 0;

    while (str[c] != '\0') {
        my_putchar(str[c]);
        c = c + 1;
    }    
    return (0);
}
