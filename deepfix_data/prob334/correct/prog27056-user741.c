#include <stdio.h>
#include <stdlib.h>
int main() {
    int h, l, i, j, k;
    scanf("%d %d",&h,&l);
    for(i=1;i<=h;i++) {
       for(j=(h-i);j>0;j--)
        printf("*");
       for(j=1;j<=(l-2*(h-i));j++)
        printf("#");
       printf("\n"); }
	return 0; }