#include <stdio.h>
#include <stdlib.h>
int main() {
int n;
scanf("%d",&n);
int i=1;
int j, k, l;
for(j=1;j<=n+1; j++) {
    for(k=1; k<=n+1-j; k++)
    {printf(" "); }
    for(l=1; l<=j; l++)
    {if((k+l+j)%2==0)
    printf("*");
    else
    printf("x");}
printf("\n");}
	return 0; }