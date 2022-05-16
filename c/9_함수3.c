#include <stdio.h>

void print_array(int* arr, int n)
{
    // int lenght = sizeof(arr) / sizeof(arr[0]);
    printf("print_array: %lu\n", sizeof(arr));
}

int main(void)
{
    int arr[10];
    printf("main: %lu\n", sizeof(arr));

    print_array(arr, 10);
    // Decay: print_array(&arr[0]);

    return 0;
}