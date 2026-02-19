
#include <unistd.h>

void ft_print_comb(void)
{
    int i = 48;
    while(i <= 55)
    {
        int j = i + 1;
        while(j <= 56)
        {
            int k = j + 1;
            while(k <= 57)
            {
                write(1, &i, 1);
                write(1, &j, 1);
                write(1, &k, 1);
                if(!(i == 55 && j == 56 && k == 57))
                    write(1, ", ", 2);
                k++;

            }
            j++;
        }
        i++;
    }
}


int main(void)
{
    ft_print_comb();
    return(0);
}