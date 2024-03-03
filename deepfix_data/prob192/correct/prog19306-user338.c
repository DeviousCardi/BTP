#include <stdio.h>
#include <stdlib.h>
int main(){
int n,i,j;
   scanf("%d",&n);
   for(i=0;i<n;i++) {
   for(j=1;j<=(2*i+1);j++) {
       for(j=(2*i+1);j<=n;j--) {
    printf("*"); } }
   printf("\n"); }
	return 0; }