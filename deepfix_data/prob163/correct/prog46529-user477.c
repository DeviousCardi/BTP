#include <stdio.h>
#include <stdlib.h>
int main() {
	int m,n,i,j,x=0,y=0,add;
	scanf("%d\n%d\n",&m,&n);
	int arr1[m],arr2[n];
	for(i=0;i<m;i++)
	scanf("%d\n",&arr1[i]);
	printf("%d",arr1[0]);
	for(j=0;j<n;j++)
	scanf("%d\n",&arr2[j]);
	for(i=m;i>0;i--)
	x=x+(10*arr1[i]);
	for(j=n;j>0;j--)
	y=y+(10*arr2[j]);
	add=x+y;
	printf("%d",add);
	return 0; }