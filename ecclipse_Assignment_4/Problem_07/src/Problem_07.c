/*
 ============================================================================
 Name        : Problem_07.c
 Author      : zyad ahmed
 Version     :
 Copyright   : out of order...... . I will show you that out of order.
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void swap(int*,int*);

int main(void) {
	setbuf(stdout,NULL);
	int num1=0,num2=0;
	printf("Enter num1:");
	scanf("%d",&num1);
	printf("Enter num2:");
	scanf("%d",&num2);
	void (* funPtr) (int*,int*);
	funPtr = swap;
	(* funPtr)(&num1,&num2);
	printf("num1 became:%d",num1);
	printf("\nnum2 became:%d",num2);
	return EXIT_SUCCESS;
}

void swap(int* num1,int* num2)
{
	*num1 = *num1 ^ *num2;
	*num2 = *num1 ^ *num2;
	*num1 = *num1 ^ *num2;
}
