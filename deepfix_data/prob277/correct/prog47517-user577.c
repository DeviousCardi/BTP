#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j;
    scanf("%d",&h);
    for (i=1; i<=h; i++) {
    for(j=1; j<=h-i; j++)
    printf(" ");
    for(j=1; i<=(2*i-1); i++)
    printf("*");
    printf("\n"); }
	return 0; }