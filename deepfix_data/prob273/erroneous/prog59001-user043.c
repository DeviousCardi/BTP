#include <stdio.h>
#include <stdlib.h>
int main() {
	            int i,j,n;
	            scanf("%d",&n);
	            for(i=(n+1)/2;i>=1;i--)
	            {for(j=1;j<i;j++)
	              printf(" ");
	              for(;j<=(n+1)/2;j++)
	              printf("%d",j);
	              printf("\n"); }
	            if(n>1)
	            { for(i=2;i>=(n+1)/2;i++)
	            { for(j=1;j<i;j++)
	              printf(" ");
	              for(;j<=(n+1)/2;j++)
	              printf("%d",j);
	              printf("\n"); }
	return 0; }