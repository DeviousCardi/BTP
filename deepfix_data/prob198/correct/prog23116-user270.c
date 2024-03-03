#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1, n2,i ;
	scanf("%d",&n1);
	int a1[n1];
	for (i=0;i<n1;i++)
	{   scanf("%d",&a1[i]);
	    printf("%d ",a1[i]); }
	printf("\n");
	scanf("%d",&n2);
	int a2[n2];
	for (i=0;i<n2;i++) {
	    scanf("%d",&a2[i]);
	    printf("%d ",a2[i]); }
	return 0; }