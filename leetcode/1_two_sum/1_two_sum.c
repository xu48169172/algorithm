/*
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
int* twoSum(int* nums, int numsSize, int target)
{
	int i, a, b, j;
	int *p = malloc(sizeof(int) * 2);
	for (i=0;i<numsSize;i++)
	{
		a = *(nums + i);
		for (j=i+1;j < numsSize;j++)
		{
			b = *(nums + j);
			if ((a+b) == target)
				goto out;
		}
	}
	return NULL;
out:
	memset(p, 0 , sizeof(int)*2);
	*p = i;
	*(p+1) = j;
	return p;
}
int main()
{
	int test[]={3,2,4};
	int *p = twoSum(test, sizeof(test)/sizeof(int), 6);
	if (p != NULL) {
		printf("first index=%d\n",*p);
		printf("second index=%d\n",*(p+1));
	}
	return 0;
}
