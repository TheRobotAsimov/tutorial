#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 20;
    int c = 30;
    int c2 = 32;
    int d = 40;

    printf("Hello World!\n");

    for (int i = 0; i < 10; i++)
    {
        printf("i = %d\n", i);
        //////////////////////
        printf("a = %d\n", a);
        printf("b = %d\n", b);
        printf("c = %d\n", c);
        printf("c2 = %d\n", c2);
        printf("d = %d\n", d);
    }

    printf("Goodbye World!\n");

    return 0;
}