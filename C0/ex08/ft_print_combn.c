#include <unistd.h>

void ft_print_combn(int n)
{
    int i;
    int j;
    
    i = n;
    while(i <= 57)
    {
        j = i + 1;
        while(j <= 57)
        {
            write(1, &i, 1);
            write(1, &j, 1);
            if(!(i == 56 && j ==57))
                write(1, ", ", 2);
            j++;
        }
        i++;
    }
}

int main(void)
{
    ft_print_combn('6');
    return(0);
}