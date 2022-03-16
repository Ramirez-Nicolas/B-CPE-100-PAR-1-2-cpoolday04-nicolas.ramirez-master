/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** 
*/

void my_swap(int *a, int *b)
{
    int c;
    
    c = *a;
    *a = *b;
    *b = c;
    return (0);
}
