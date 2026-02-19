#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    int div;
    int mod;

    div = nb / 10;
    mod = nb % 10;
    if(nb < 0)
    {
        write(1, "-", 1);
        div = -div;
        mod = -mod;
    }
    if(div)
        ft_putnbr(div);
    ft_putchar(mod + '0');
}

int main(void)
{
    ft_putnbr(42);
    write(1, "\n", 1);
    ft_putnbr(2147483647);
    write(1, "\n", 1);
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
    ft_putnbr(0);
    return(0);
}