#include <stdio.h>
int main()
{
	int a[ ] = {0,3,4,5,6,1,2};
	int i,j,min,max;
	int len = sizeof(a)/sizeof(int);
	for (i=0;i < len;i++)
		printf("%d ",a[i]);
	printf("\n");
	for (i=0;i<len;i++) {
		min = i;
		for (j=i+1;j< len;j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}
		if (i != min) {
			a[i]=a[i] + a[min];
			a[min] = a[i] - a[min];
			a[i] = a[i] - a[min];
		}
	}
	for (i=0;i< len;i++)
		printf("%d ",a[i]);
	printf("\n");
	for (i=0;i<len;i++) {
		max = i;
		for (j=i+1;j< len;j++) {
			if (a[j] > a[max]) {
				max = j;
			}
		}
		if (i != max) {
			a[i]=a[i] + a[max];
			a[max] = a[i] - a[max];
			a[i] = a[i] - a[max];
		}
	}
	for (i=0;i< len;i++)
		printf("%d ",a[i]);
	printf("\n");
}
