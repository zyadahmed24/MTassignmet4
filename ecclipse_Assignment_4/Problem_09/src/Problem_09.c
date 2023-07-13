/*
 ============================================================================
 Name        : Problem_09.c
 Author      : zyad ahmed
 Copyright   : out of order...... . I will show you that out of order.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	setbuf(stdout,NULL);
	char str[8],sstr[4];
	printf("Enter the string:\n");
	gets(str);
	char* ptr=NULL;
	ptr = str+strlen(str)-1;
	sstr[0] = *ptr;
	sstr[1] = ' ';
	sstr[2] = *(ptr-2);
	printf("the sstring is:%s",sstr);
	return EXIT_SUCCESS;
}
