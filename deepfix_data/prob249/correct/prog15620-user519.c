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
    for(i=0; i<(n/2);i++) {
        for(j=0;j<=i;j++)
        printf(" ");
        printf("*");
        for(j=i+1;j<n/2-1;j++)
        printf(" ");
        if(i!=(n/2-1))
        printf("*");
        printf("\n"); }
	return 0; }