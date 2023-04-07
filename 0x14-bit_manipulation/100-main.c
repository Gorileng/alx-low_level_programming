#include <stdio.h>
#include "main.h"

int main(void)
{
    int n;

    n = get_endianness();
    if (n != 0)
    {
        printf("Small Endian\n");
    }
    else
    {
        printf("Big Endian\n");
    }
    return (0);
}
