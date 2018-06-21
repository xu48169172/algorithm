#include <stdio.h>
int main()
{
	int a[ ] = {0,3,4,5,6,1,2};
	int i,j;
	int len = sizeof(a)/sizeof(int);
	for (i=0;i < len;i++)
		printf("%d ",a[i]);
	printf("\n");
	for (i=0;i<len;i++) {
		for (j=i;j< len;j++){
			if (a[i] > a [j]) {
				a[i] = a[i] + a[j];
				a[j] = a[i] - a[j];
				a[i] = a[i] - a[j];
			}
		}
	}
	for (i=0;i< len;i++)
		printf("%d ",a[i]);
	printf("\n");
	for (i=0;i<len;i++) {
		for (j=i;j< len;j++){
			if (a[i] < a [j]) {
				a[i] = a[i] + a[j];
				a[j] = a[i] - a[j];
				a[i] = a[i] - a[j];
			}
		}
	}
	for (i=0;i< len;i++)
		printf("%d ",a[i]);
	printf("\n");
}
