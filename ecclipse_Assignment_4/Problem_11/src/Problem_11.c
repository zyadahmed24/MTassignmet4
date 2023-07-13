/*
 ============================================================================
 Name        : Problem_11.c
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
	int x=0;
	short y=0;
	printf("Enter the 32 bit number:");
	scanf("%x",&x);
	short* ptr=NULL;
	ptr = &x;
	y=*ptr;
	*ptr=*(ptr+1);
	*(ptr+1)=y;
	printf("After the swap:%x",x);
	return EXIT_SUCCESS;
}
