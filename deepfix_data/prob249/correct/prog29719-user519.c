#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k;
    for(i=0; i<(n/2+1);i++) {
        for(j=i;j<n/2;j++)
        printf(" ");
        printf("*");
        {for(k=0;k<i-1;k++)
        printf(" ");} }
	return 0; }