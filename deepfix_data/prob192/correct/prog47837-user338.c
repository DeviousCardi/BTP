#include <stdio.h>
#include <stdlib.h>
int main(){
int n,i,j;
   scanf("%d",&n);
   for(i=1;i<=n;i++) {
   for(j=1;j<=(2*i+1)/2;j=j+2) {
   for(j=(2*i+1)/2;j>=(2*i+1)/2;j=j-2) {
       printf("*"); }
   printf("\n"); } }
	return 0; }