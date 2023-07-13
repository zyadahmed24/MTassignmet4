/*
 ============================================================================
 Name        : Problem_05.c
 Author      : zyad ahmed
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int arr1[8],arr2[8];
	const int* ptr = arr1;
	printf("Enter the first array:\n");
	for(int i=0;i<8;i++)
	{
		scanf("%d",arr1+i);
	}
	for(int i=0;i<8;i++)
	{
		arr2[i]=*(ptr+i);
	}
	printf("The second array:");
	for(int i=0;i<8;i++)
	{
		printf("%d ",*(arr2+i));
	}

	return EXIT_SUCCESS;
}
