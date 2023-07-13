/*
 ============================================================================
 Name        : Problem_12.c
 Author      : zyad ahmed
 Version     :
 Copyright   : out of order...... . I will show you that out of order.
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int getTheOddReps(int* arr,int size)
{
	int count=0;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if(count%2 == 1)
		{
			return arr[i];
		}
		count=0;
	}
	return 0;
}

int main(void) {
	int arr[]={1,2,3,4,1,2,3,3,4};
	printf("the odd repeated is:%d",getTheOddReps(arr,9));
	return EXIT_SUCCESS;
}
