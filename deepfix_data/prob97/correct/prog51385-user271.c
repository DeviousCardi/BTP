#include <stdio.h>
#include <stdlib.h>
int main() {int i,j,n;
scanf("%d",&n);
for(i=1;i<=n;i++) {
    for(j=n-i;j>=0;j--)
    printf(" ");
    for(j=n-i+1;j<=n+i-1;j++)
   {    if(j>=n-i+1)
       printf("%d",j%10); }
printf("\n"); }
	return 0; }