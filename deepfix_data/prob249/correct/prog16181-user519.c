#include <stdio.h>
#include <stdlib.h>
int main() {
    int n=9,i,j,k;
    for(i=0; i<(n/2+1);i++) {
        for(j=i+1;j<n/2;j++)
        {printf(" ");}
       for(k=1;k<=i+1;k++)
        {printf("*");} }
    printf("\n");
	return 0; }