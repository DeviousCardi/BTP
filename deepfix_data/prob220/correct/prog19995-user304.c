#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j;
    scanf("%d",&h);
    for(i=h;i>1;i--) {
        for(j=1;j<i;j++)
        printf(" ");
        printf("*\n"); }
    for(i=1;i<2*h;i++)
    printf("*");
	return 0; }