// main.c
#include <stdio.h>

void inc();
void dec();
int val();

// extern int count;

int main()
{
    inc();
    inc();
    // count = 0;
    inc();

    printf("%d\n", val());
}