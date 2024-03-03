#include <stdio.h>
#include <stdlib.h>
int main(){
int n,i,j;
   scanf("%d",&n);
   for(i=0;i<n;i++) {
           printf(" "); }
   for(j=1;j<=(2*i+1);j=j+1) {
    printf("*");
   printf("\n"); }
	return 0; }