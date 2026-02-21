#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int temp;

    while(size > 1) //number of passes
    {
        i = 0;
        while(i < size - 1) //number of comparisons in each pass
        {
            if(tab[i] > tab[i + 1])
            {
                temp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = temp;
            }
            i++;
        }
        size--;
    }
}

int main(void)
{
    int tab[] = {5, 3, 7, 4, 2, 9};

    ft_sort_int_tab(tab, 6);
    printf("%i, %i, %i, %i, %i, %i", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
    return(0);
}