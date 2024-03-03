#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,h,m;
    scanf("%d",&h);
    m=1;
    for(i=1;i<=h;i++) {
        for(j=1;j<=h-i;j++)
            printf(" ");
        for(k=1;k<=m;k++)
            printf("%d",h+1-i);
        printf("\n");
        m=m+2; }
	return 0; }