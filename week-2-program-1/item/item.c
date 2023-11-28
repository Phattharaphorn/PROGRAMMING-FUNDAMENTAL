#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a;
	int b;
	int i = 1;
	int row = 10;
	while (i <= row) {
		for (a = row; a >= i; a--) 
			printf("*");
		}
		for (b = 1; b <= i; b++) {
			printf(" ");
		}
		printf("\n");
		i = i + 1;
	}
}