#include <stdio.h>

int main() {
    int arr[] = { 100, 8, 53 };
    int* pointer[3];

    pointer[0] = &arr[0];
    pointer[1] = &arr[1];
    pointer[2] = &arr[2];

    if (*(pointer[0]) <= *(pointer[1]) && *(pointer[1]) <= *(pointer[2])) {
        printf("%d %d %d", *(pointer[0]), *(pointer[1]), *(pointer[2]));
    }
    else {

        if (*(pointer[0]) <= *(pointer[2]) && *(pointer[2]) <= *(pointer[1])) {
            printf("%d %d %d", *(pointer[0]), *(pointer[2]), *(pointer[1]));
        }
        else {

            if (*(pointer[1]) <= *(pointer[0]) && *(pointer[0]) <= *(pointer[2])) {
                printf("%d %d %d", *(pointer[1]), *(pointer[0]), *(pointer[2]));
            }
            else {

                if (*(pointer[1]) <= *(pointer[2]) && *(pointer[2]) <= *(pointer[0])) {
                    printf("%d %d %d", *(pointer[1]), *(pointer[2]), *(pointer[0]));
                }
                else {

                    if (*(pointer[2]) <= *(pointer[0]) && *(pointer[0]) <= *(pointer[1])) {
                        printf("%d %d %d", *(pointer[2]), *(pointer[0]), *(pointer[1]));
                    }
                    else {
                        if (*(pointer[0]) == *(pointer[1]) && *(pointer[1]) == *(pointer[2])) {
                            printf("%d %d %d", *(pointer[0]), *(pointer[1]), *(pointer[2]));
                        }
                        else {
                            printf("%d %d %d", *(pointer[2]), *(pointer[1]), *(pointer[0]));
                        }
                    }
                }
            }
        }
    }
    printf("\n");
}