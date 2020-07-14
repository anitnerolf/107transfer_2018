/*
** EPITECH PROJECT, 2019
** 107transfer
** File description:
** main
*/

#include "include/my.h"

horner_t	*horner_method(void)
{
    horner_t	*h = malloc(sizeof(horner_t));

    h->i = 0.001;
    h->j = 1.001;
    h->k = 0.000;
    h->r = 0;
    h->f = 1;
    return (h);
}

char	to_return(char c)
{
    char d;

    d = c - '0';
    return (d);
}

double	horner_algorithm(int ac, char *av, double z)
{
    int i = strlen(av) - 1;
    double j = 0;
    int k = 0;

    for (i = strlen(av) - 1; i >= 0; i = i - 2) {
        for ( ; i >= 0 && av[i] != '*'; i--);
        i++;
        j = j * z;
        j = j + to_return(av[i]);
    }
    return (j);
}

void	reset_variables(horner_t *h)
{
    h->r = 1;
    h->f = 1;
    h->first = 0;
    h->second = 0;
}

int	main(int ac, char **av)
{
    horner_t	*h = horner_method();

    if (ac == 2 && (strcmp(av[1], "-h") == 0)) {
        usage_h();
    } else if (ac != 1 && ac % 2 != 0) {
        for ( ; h->k < h->j; h->k = h->k + h->i) {
            reset_variables(h);
            for ( ; h->f < ac; h->f = h->f + 2) {
                h->first = horner_algorithm(ac, av[h->f], h->k);
                h->second = horner_algorithm(ac, av[h->f + 1], h->k);
                if (h->second == 0 || check_string(av[h->f]) == -1 || \
    check_string(av[h->f + 1]) == -1)
                    return (84);
                h->r = h->r * h->first / h->second;
            }
            printf("%.3f -> %.5f\n", h->k, h->r);
        }
    } else
        return (84);
    return (0);
}
