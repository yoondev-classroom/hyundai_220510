// c.c
#include "test.h"
#include <stdio.h>

#include "test.h"

int main(void)
{
    int r1 = add(10, 20);
    int r2 = sub(10, 20);

    printf("%d %d", r1, r2);

    return 0;
}