#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j;
	for (i = 1; i >= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
	}
	for (i = 10; i >= 0; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}