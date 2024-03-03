#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j,n;
    scanf("%d",&h);
    n=h;
    for(i=1;i<=h;i++) {
            for(j=1;j<=n;j++)
            printf(" ");
            for(k=1;k<(2*h-1);k++)
            printf("%d",j); }
	return 0; }