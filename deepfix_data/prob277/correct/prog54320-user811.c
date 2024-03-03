#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j,k,s;
    s=1;
    scanf("%d",&h);
    for(i=h;i>1;i=i-2) {
        for(j=i;j>=1;j--)
        printf("*");
        printf("\n");
        for(k=1;k<=s;k++)
        printf(" ");
        s=s+1; }
	return 0; }