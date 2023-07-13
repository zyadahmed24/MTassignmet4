/*
 ============================================================================
 Name        : Problem_08.c
 Author      : zyad ahmed
 Copyright   : out of order...... . I will show you that out of order.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void swapArray(int* arr1,int* arr2,int size)
{
	int* ptr1=arr1;
	int* ptr2=arr2;

	int temp=0,i=0;
	for(i=0;i<size;i++)
	{
		temp=*(ptr1+i);
		*(ptr1+i)=*(ptr2+i);
		*(ptr2+i)=temp;
	}
}

int main(void) {
	setbuf(stdout,NULL);
	int arr1[8],arr2[8];
	printf("Enter the first array:\n");
	for(int i=0;i<8;i++)
	{
		scanf("%d",arr1+i);
	}
	printf("Enter the second array:\n");
	for(int i=0;i<8;i++)
	{
		scanf("%d",arr2+i);
	}
	swapArray(arr1, arr2, 8);
	printf("the first array became:");
	for(int i=0;i<8;i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\nthe first array became:");
	for(int i=0;i<8;i++)
	{
		printf("%d ",arr2[i]);
	}
	return EXIT_SUCCESS;
}
