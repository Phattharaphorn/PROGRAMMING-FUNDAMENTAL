#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    long array[2], * maximum, size = 2, c, location = 1;

    printf("Enter %d integers : ", size);

    for (c = 0; c < size; c++)
        scanf("%d", &array[c]);

    maximum = array;
    *maximum = *array;

    for (c = 1; c < size; c++)
    {
        if (*(array + c) > *maximum)
        {
            *maximum = *(array + c);
            location = c + 1;
        }
    }

    printf("\nMaximum number is '%d' at location number '%d' \n", *maximum, location);

    return 0;
}
