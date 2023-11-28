#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, i, * pointer, sum = 0;

	printf("\nEnter number of elements: ");
	scanf("%d", &n);

	pointer = (int*)malloc(n * sizeof(int));

	if (pointer == NULL)
	{
		printf("Error! memory not allocated.");
		exit(0);
	}

	for (i = 0; i < n && (n != 1 && n <= 4); i++)
	{
		printf("Enter elements: ");
		scanf("%d", pointer + i);
		sum += *(pointer + i);
	}

	if (n == 1 || n > 4) {
		printf("Please fill total numbers don't more than 1 number but less than 5 numbers ");
	}
	else {
		printf("Sum = %d", sum);
	}

	free(pointer);
	return 0;
}
