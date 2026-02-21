
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int i;
    int j;

    i = 0;
    while(i < size / 2)
    {
        j = size - 1 - i;
        temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
        i++;
    }
}

int main(void)
{
    int tab[] = {0, 2, 4, 6, 8};

    ft_rev_int_tab(tab, 5);
    printf("%i, %i, %i, %i, %i", tab[0], tab[1], tab[2], tab[3], tab[4]);
    return(0);
}