#include <stdio.h>
#include <stdlib.h>
int main() {
int i,j,k,n;
scanf("%d",&n);
for(i=0;i<n/2;i++) {
    for(j=0;j<i;j=j+1)
    printf(" "); }
for(k=0;k<n-2*i;k=k+1); {
    printf("*");
    printf("\n"); }
for(i=0;i<n/2+1;i++) { {
        for(j=0;j<n/2-i;j=j+1)
        printf(" "); }
    for(k=0;k<2*i+1;k=k+1)
    printf("*");
    printf("\n"); }
	return 0; }