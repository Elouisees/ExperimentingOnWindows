#include <stdio.h>

int main(void)
{
    int a = 5;  //declaring an int var and assigning the value of 5
    int *ptr;   //declaring a pointer to int
    int b;      //declaring an int var
    printf("ptr's value: %2d, ptr's address: %p\n\n", *ptr, ptr);

    ptr = &a;   //pointer ptr points to what is stored at the memory adress of var a
    printf(" a's value: %2d,  a's address: %p\n", a , &a);
    b = a;      //b will take the value and not the adress
    a = 42;     //b is still equal to 5, ptr will return 42
    printf("ptr's value: %2d, ptr's address: %p\n", *ptr, ptr);
    printf(" b's value: %2d,  b's address: %p\n", b , &b);
    return(0);
}