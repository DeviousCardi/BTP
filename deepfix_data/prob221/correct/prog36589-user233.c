#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,b=0,h;
    scanf("%d",&h);
    for(i=0;i<2*h-1;i++)
    printf("*");
    printf("\n");
    for(i=1;i<=h-1;i++) {
        for(j=0;j<h-i;j++) {
            if(i==j||j==h-i)
            printf("*");
            else
            printf(" "); }
        printf("\n"); }
	return 0; }