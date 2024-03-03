#include <stdio.h>
#include <stdlib.h>
int main() {
    int n=9,i,j;
    for(i=0; i<(n/2+1);i++) {
        for(j=i;j<n/2;j++)
        printf(" ");
        printf("*");
        for(j=0;j<i-1;j++)
        printf(" ");
        if(i!=0)
        printf("*");
        printf("\n"); }
    printf("\n");
	return 0; }