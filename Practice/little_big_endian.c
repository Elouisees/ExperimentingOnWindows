
#include <stdio.h>

int main(void)
{
    int x = 9;

    if(*(char *)&x == 0x09)
        printf("%s\n True");
    else
        printf( "%s]\n False");
    //x as a byte to get its very first byte, it will return
    //true (little endian) if the first byte is equal to 9.

    return(0);
}