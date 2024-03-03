#include <stdio.h>
#include <stdlib.h>
int main() {
     int i,j,k,l;
     scanf("%d",&n);
     for(i=1;i<=n;i++) {
         if(i==n) {
             for(l=1;l<=(2*n-1);l++)
	printf("*"); }
         else {
             for(j=1;j<(6-i);j++)
             printf(" ");
             printf("*\n"); } }
	return 0; }