#include <stdio.h>
#include <stdlib.h>
int main() {
	            int i,j,n;
	            scanf("%d",&n);
	            for(i=(n+1)/2;i>=1;i--)
	            {for(j=1;j<i;j++)
	              printf(" ");
	              for(;j<=(2*n-1);j++)
	              printf("%d",j%10);
	              printf("\n"); }
	return 0; }