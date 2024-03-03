#include <stdio.h>
#include <stdlib.h>
int main() {int i,j,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=i;j<=n;j++)
        {if(j=(n+1)/2)
        printf("*");}
printf("\n"); }
	return 0; }