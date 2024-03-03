#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,blank;
	scanf("%d",&n);
	for (i=(2*n-1);i<=n;i--){
	    for(blank=0;blank<n;blank++)
	      printf(" ");
	    for (j=i;j<=2*i-1;j++)
	      printf("* ");
	    for (j=1;j<=2*i-1;j++)
	      printf("* ");
	printf("\n"); }
	return 0; }