#include <stdio.h>
#include <stdlib.h>
int main() {int i,j,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=n-1;j<=n+1;j++)
printf("%d\n",n);
printf("%d\n",j%10);
printf("\n"); }
	return 0; }