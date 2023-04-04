/*
** EPITECH PROJECT, 2021
** Unit tests
** File description:
** Test my_strlen and my_swap
*/

#include <criterion/criterion.h>

void add_mul_4param(int first, int second, int *sum, int *product);

void add_mul_2param(int *first, int *second);

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

void my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

Test(MY_swap, test_swap)
{
    int first = 5;
    int second = 6;

    my_swap(&first, &second);
    cr_assert_eq(first, 6);
    cr_assert_eq(second, 5);
}

Test(my_strlen, test_my_strlen)
{
    char *str = "Hello World!";

    cr_assert_eq(my_strlen(str), 12);
}
