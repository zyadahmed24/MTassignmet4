/*
 ============================================================================
 Name        : Problem_01.c
 Author      : zyad ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int arr[]={1,2,3,4,5,6,7,8},sum=0;
	int* ptr = arr;
	printf("Enter the array\n");
	for(int i=0;i<8;i++)
	{
		scanf("%d",ptr+i);
	}
	for(int i=0;i<8;i++)
	{
		sum+= *(ptr+i);
	}
	printf("the sum is:%d",sum);
	return EXIT_SUCCESS;
}
