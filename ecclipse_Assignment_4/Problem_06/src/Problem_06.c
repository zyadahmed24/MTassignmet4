/*
 ============================================================================
 Name        : Problem_06.c
 Author      : zyad ahmed
 Copyright   : out of order......, I will show you the out of order.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int arr1[8],max=0;
	int* ptr[8]={NULL};
	printf("Enter the first array:\n");
	for(int i=0;i<8;i++)
	{
		scanf("%d",arr1+i);
	}
	for(int i=0;i<8;i++)
	{
		*(ptr+i) = arr1+i;
		max = (max>*ptr[i]? max : *ptr[i]);
	}
	printf("The array:");
	for(int i=0;i<8;i++)
	{
		printf("%d ",**(ptr+i));
	}
	printf("\nThe max is:%d",max);
	return EXIT_SUCCESS;
}
