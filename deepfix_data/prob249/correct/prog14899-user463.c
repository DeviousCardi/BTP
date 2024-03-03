#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int i,j,h;
    scanf("%d",&h);
    for(i=1;i<=h;i++) {
        for(j=1;j<=((h+1)/2);j++) {
            if((j==((h+1)/2))||(j==abs(((h+3)/2)-i)))
            printf("*");
            else
            printf(" "); }
        printf("\n"); }
	return 0; }