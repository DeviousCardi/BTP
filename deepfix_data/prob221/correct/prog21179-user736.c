#include <stdio.h>
#include <stdlib.h>
int main() {
int i,j,k,n;
scanf("%d",&n);
 for(i=0;i<n;i++) {
    if(i!=0) {
        for(j=0;j<2*n-1;j++) {
        if(j==i||j==2*n-2-i)
        printf("*");
        else
        printf(" "); } }
   else {
    for(k=0;k<2*n-1;k++)
    printf("*"); }
 printf("\n"); }
	return 0; }