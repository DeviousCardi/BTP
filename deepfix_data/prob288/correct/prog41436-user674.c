#include <stdio.h>
#include <stdlib.h>
int main() {
int n;
scanf("%d",&n);
int i=1;
int j, k, l;
for(j=1;j<=n+1; j++) {
    for(k=1; k<=n+1-i; i++)
    {printf(" "); }
for(l=1;l<=i-1;l++)
{printf("*x");
}if(i%2==1)
{printf("*"); }
printf("\n");}
	return 0; }