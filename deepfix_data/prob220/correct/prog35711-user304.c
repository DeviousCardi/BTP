#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j;
    scanf("%d",&h);
    for(i=h;i>1;i--) {
        for(j=0;j<(i/2);j++)
        printf(" ");
        printf("*\n"); }
    for(i=0;i<h;i++)
    printf("*");
	return 0; }