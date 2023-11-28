#include <stdio.h>
int main()
{
    int i, j, n;
    for (i = 1; i <= 12; i++) {
        n = 2;
        for (j = 1; j <= 6; j++) {
            printf("%5dx%2d=%3d", n, i, n * i);
            n++;
        }
        printf("\n");
    }
    printf("\n\n");
    for (i = 1; i <= 12; i++) {
        n = 8;
        for (j = 1; j <= 6; j++) {
            printf("%5dx%2d=%3d", n, i, n * i);
            n++;
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}