#include <stdio.h>
#include <stdlib.h>
int main() {int i,j,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
        {{if(j==(n+1)/2-1)
        printf("*");
            else
            printf(" ");}
            {if(j==(n+1)/2-i)
            printf("*");
            else
            printf(" ");}
            {if((i>5)&&(j==i-4))
            printf("*");
            else
            printf(" ");} }
printf("\n"); }
	return 0; }