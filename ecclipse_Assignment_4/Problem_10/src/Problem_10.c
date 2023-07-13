/*
 ============================================================================
 Name        : Problem_10.c
 Author      : zyad ahmed
 Copyright   : out of order...... . I will show you that out of order.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void swapPointer(int** ptr1,int** ptr2)
{
	int* temp=NULL;
	temp =*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}

int main(void) {
	setbuf(stdout,NULL);
	int x=0,y=0;
	int* ptr1=&x;
	int* ptr2=&y;
	printf("the pointers values before the swap:\nptr1=%p\nptr2=%p",ptr1,ptr2);
	swapPointer(&ptr1, &ptr2);
	printf("\nthe pointers values after the swap:\nptr1=%p\nptr2=%p",ptr1,ptr2);
	return EXIT_SUCCESS;
}
