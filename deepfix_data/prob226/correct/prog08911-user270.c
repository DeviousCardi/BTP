#include <stdio.h>
int main() {
	int d, n;
	scanf("%d%d",&d,&n);
	int b[d],i, a[30];
	for(i=0;i<d;i++) {
	    scanf("%d",&b[i]);
	    printf("%d ",b[i]); }
	printf("\n");
	for (i=0; i<d;i++) {
	    a[i]=b[i];
	    printf("%d",a[i]); }
	return 0; }