/*
** EPITECH PROJECT, 2019
** 107transfer_2018
** File description:
** usage_h
*/

#include "my.h"

void	usage_h(void)
{
    printf("USAGE\n\t./107transfer [num den]*\n\n");
    printf("DESCRIPTION\n\tnum\tpolynomial numerator defined");
    printf(" by its coefficients\n\tden\tpolynomial denominator");
    printf(" defined by its coefficients\n");
}

int	check_string(char *str)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        if ((str[i] >= '0' && str[i] <= '9') || str[i] == '*')
            j = 1;
        else
            j = -1;
        i++;
    }
    return (j);
}
