#include <stdio.h>
int main()
{
	int a[ ] = {0,3,4,5,6,1,2};
	int i,j;
	int len = sizeof(a)/sizeof(int);
	for (i=0;i < len;i++)
		printf("%d ",a[i]);
	printf("\n");
	for (i=1;i<len;i++) {
		for (j=i;j>0;j--){
			if (a[j] > a [j-1]) {
				a[j] = a[j] + a[j-1];
				a[j-1] = a[j] - a[j-1];
				a[j] = a[j] - a[j-1];
			}
		}
	}
	for (i=0;i< len;i++)
		printf("%d ",a[i]);
	printf("\n");
	for (i=1;i<len;i++) {
		for (j=i;j>0;j--){
			if (a[j] < a [j-1]) {
				a[j] = a[j] + a[j-1];
				a[j-1] = a[j] - a[j-1];
				a[j] = a[j] - a[j-1];
			}
		}
	}
	for (i=0;i< len;i++)
		printf("%d ",a[i]);
	printf("\n");
}
