#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
main() {
	int data[] = { 10,20,30 };
	int* ptr = &data[0];

	printf("\ndata[2] = %d", *(ptr + 2));
	printf("\ndata[1] = %d", *(ptr + 1));
	printf("\ndata[0] = %d", *(ptr));

	return 0;
}

