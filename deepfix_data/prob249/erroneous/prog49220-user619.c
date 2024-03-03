#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   r=i;
        if(i>n/2+1)
            r=n+1-i;
       for(j=1;j<=(n/2+1-r);j++)
            printf(" ");
        printf("*");
        for(k=1;k+j<=n/2;k++)
            printf(" ");
        if(j<=n/2&&j<n)
            printf("*");
            printf("\n"); }
	return 0; }