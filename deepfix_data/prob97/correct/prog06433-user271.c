#include <stdio.h>
#include <stdlib.h>
int main() {int i,j,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=i;j<=n+1;j++)
printf("%d\n",n%10);
printf("%d",j%10);
printf("\n"); }
	return 0; }