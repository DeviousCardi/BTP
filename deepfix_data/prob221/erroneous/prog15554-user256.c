#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n;
    int left=0;
    scanf("%d",&n);
    int x=2*n-3;
    for(i=0;i<n;i++) {
    for(j=0;j<left;j++) {
        printf(" "); }
    printf("*");
    for(j=0;j<x;j++) {
        if(i==0)
        printf("*");
        else
        printf(" "); }
    printf("*");
    printf("\n");
    left=left+1;
    x=x-2; } }
	return (0);