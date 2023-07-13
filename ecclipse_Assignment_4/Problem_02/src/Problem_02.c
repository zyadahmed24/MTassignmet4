/*
 ============================================================================
 Name        : Problem_02.c
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
	printf("Enter the string:\n");
	char str[8];
	gets(str);
	int i=0;

	while(str[i]!='\0')
	{
		i++;
	}

	printf("the length is:%d",i);
	return EXIT_SUCCESS;
}
