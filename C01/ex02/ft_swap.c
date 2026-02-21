#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a;
    int b;

    a = 5;
    b = 8;
    ft_swap(&a, &b);
    printf("%i\n", a);
    printf("%i\n", b);
    return(0);
}