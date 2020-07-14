/*
** EPITECH PROJECT, 2019
** 107transfer
** File description:
** my.h
*/

#ifndef	MY_H
#define	MY_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <math.h>

typedef	struct	horner
{
    double i;
    double j;
    double k;
    double r;
    int f;
    double first;
    double second;
}	horner_t;

int	check_string(char *str);
char	**double_array(char *str, char c, int i, int j);
void	usage_h(void);

#endif	/* MY_H */
