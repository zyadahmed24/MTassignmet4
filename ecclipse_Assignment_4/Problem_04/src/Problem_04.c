/*
 ============================================================================
 Name        : Problem_04.c
 Author      : zyad ahmed
 Version     :
 Copyright   : out of order...... . I will show you that out of order.
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int getTheSmall(const int *ptr,int size)
{
	int small=*ptr;
	for(int i=0;i<size;i++)
	{
		small = (small>*(ptr+i)? *(ptr+i):small);
	}
	return small;
}

int main(void) {
	setbuf(stdout,NULL);
	int arr[8];
	const int* ptr = arr;
	printf("Enter the array:\n");
	for(int i=0;i<8;i++)
	{
		scanf("%d",arr+i);
	}
	printf("The small is:%d",getTheSmall(ptr, 8));

	return EXIT_SUCCESS;
}
