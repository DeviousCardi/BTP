#include <stdio.h>
#include <stdlib.h>
int main() {
int n;
scanf("%d",&n);
int j, k, l;
for(j=1;j<=n+1; j++) {
    for(k=1; k<=n+1-j; k++)
    {printf(" "); }
    for(l=1; l<=j; l++)
    {if((k+l+j)%2==1)
    printf("*");
    else
    printf("x");}
printf("\n");}
for(j=1;j<=n; j++) {
    for(k=1; k<=j; k++)
    {printf(" "); }
    for(l=1; l<=n-j+1; l++)
   {if(n%2==1)
   {if((k+l+j)%2==1)
    printf("*");
    else
    printf("x");}
       else
       {if((k+l+j)%2==1)
    printf("x");
    else
    printf("*"); } }
printf("\n");}
	return 0; }