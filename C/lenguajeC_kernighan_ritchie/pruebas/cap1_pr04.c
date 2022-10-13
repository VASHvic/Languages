/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    imprimir en salida
    modificacion: usar printf en vez de putchar
*/

#include <stdio.h>

main()
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        printf("%c", c);
        c = getchar();
    }
}