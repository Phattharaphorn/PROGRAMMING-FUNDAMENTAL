#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, num1 = 0, num2 = 0, num3 = 0, num4 = 0, sum = 0, * pointer;

	printf("\nEnter number of elements: ");
	scanf("%d", &n);

	pointer = (int*)malloc(n * sizeof(int));

	if (pointer == NULL)
	{
		printf("Error! memory not allocated.");
		exit(0);
	}

	if (n != 1 && n <= 4) {

		if (n > 1) {
			printf("Enter elements: ");
			scanf("%d", &num1);
		}
		if (n >= 2) {
			printf("Enter elements: ");
			scanf("%d", &num2);
		}
		if (n >= 3) {
			printf("Enter elements: ");
			scanf("%d", &num3);
		}
		if (n == 4) {
			printf("Enter elements: ");
			scanf("%d", &num4);
		}
		else {
			sum = num1 + num2 + num3 + num4;
			printf("Sum = %d", sum);
		}
	}
	else {
		printf("Please fill total numbers don't more than 1 number but less than 5 numbers ");
	}

	free(pointer);
	return 0;
}