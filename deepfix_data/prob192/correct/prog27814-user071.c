#include <stdio.h>
#include <stdlib.h>
int main() {
	   int i,j,n,m;
	   scanf("%d",&n);
	   for(i=1;i<=(n+1)/2;i=i+1) {
           for(m=1;m<=(((n+1)/2)-i);m=m+1) {
               printf(" "); }
	       for (j=1;j<=2*i-1;j=j+1) {
	           printf("*"); }
            printf("\n"); }
	   for(j=i;i<=n;i=i+1) {
	       for(j=1;j<=2*(n-i)+1;j=j+1) {
	           printf("*"); }
	   printf("\n"); }
	return 0; }