#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;

}

int main(void)
{
    int div;
    int mod;
    int a;
    int b;

    a = 6;
    b = 3;
    ft_div_mod(a, b, &div, &mod);
    printf("%i\n", div);
    printf("%i\n", mod);
    return(0);
}