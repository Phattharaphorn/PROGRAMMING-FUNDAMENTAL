#include <stdio.h>
int main() {
    int i, j, k, main;
    for (i = 0; i < 2; i++) {
        for (j = 1; j <= 12; j++) {
            if (i == 0) {
                main = 2;
            }
            else {
                main = 8;
            }
            for (k = 1; k <= 6; k++) {
                printf("%5dx%2d=%3d", main, j, main * j);
                main++;
            }
            printf("\n");
        }
        printf("\n\n");
    }
    return 0;
}