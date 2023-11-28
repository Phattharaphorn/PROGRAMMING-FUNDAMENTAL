#include <stdio.h>

void sortNumber(int n, int* pointer)
{
    int i, j, k;

    for (i = 0; i < n; i++) {

        for (j = i + 1; j < n; j++) {

            if (*(pointer + j) < *(pointer + i)) {

                k = *(pointer + i);
                *(pointer + i) = *(pointer + j);
                *(pointer + j) = k;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ", *(pointer + i));
    }
    printf("\n");
}

int main()
{
    int n = 3;
    int arr[] = { 100, 8, 53 };

    sortNumber(n, arr);

    return 0;
}