/*
 ============================================================================
 Name        : Problem_03.c
 Author      : zyad ahmed
 Version     :
 Copyright   : out of order...... . I will show you that out of order.
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int arr[8];
	int* ptr = arr;
	printf("Enter the array:\n");
	for(int i=0;i<8;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("The reversed array:");
	for(int i=7;i>=0;i--)
	{
		printf("%d ",*(ptr+i));
	}

	return EXIT_SUCCESS;
}
