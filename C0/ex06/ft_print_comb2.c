#include <unistd.h>

// void ft_putchar(char c)
// {
//     write(1, &c, 1);
// }

// void ft_print_comb2(void)
// {
//     int i;

//     i = 0;
//     while(i <= 99)
//     {
//         ft_putchar((i / 10) + '0');
//         ft_putchar((i % 10) + '0');
//         if(i < 99)
//             write(1, ",", 1);
//         i++;

//     }
// }

void ft_print_comb2(void)
{
    int i;
    int j;

    i = 48;
    while(i <= 57)
    {
        j = 48;
        while(j <= 57)
        {
            write(1, &i, 1);
            write(1, &j, 1);
            if(!(i == 57 && j == 57))
                write(1, ", ", 2);
            j++;
        }
        i++;
    }
}

int main(void)
{
    ft_print_comb2();
    return(0);
}