#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num1, num2;
    int* pointer1, * pointer2;

    printf("Enter 2 integers: ");
    scanf("%d %d", &num1, &num2);

    pointer1 = &num1;
    pointer2 = &num2;

    if (*pointer1 > *pointer2)
    {
        printf("\nMaximum number is '%d' at location number '1' \n", *pointer1);
    }

    else
    {
        printf("\nMaximum number is '%d' at location number '2' \n", *pointer2);
    }

    return 0;
}
