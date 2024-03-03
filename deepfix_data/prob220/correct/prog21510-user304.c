#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j;
    scanf("%d",&h);
    for(i=1;i<=h;i++) {
        for(j=1;j<h-i;j++)
            printf(" ");
        printf("*");
        for(j=1;j<=(2*i-3);j++)
            printf(" ");
        if(i!=1)
            printf("*\n");
        else
            printf("\n"); }
    for(i=1;i<2*h;i++)
    printf("*");
	return 0; }