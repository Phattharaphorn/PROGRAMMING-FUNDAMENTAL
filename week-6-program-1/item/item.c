#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
main() {

	int man = 30;
	int girl = 20;
	int boy = 10;

	int* data[3];
	data[0] = &man;
	data[1] = &girl;
	data[2] = &boy;


	int i = 0;
	for (i = 0; i < 3; i++) {
		printf("\ndata[%d] = %d", i, *(data[i]));
	}

	return 0;
}

