#include <stdio.h>
#include <stdlib.h>
int main() {
   int i,j,a,b,k;
   scanf("%d%d",&a,&b);
   for(i=0;i<a;i++) {
       k=i+1;
     for(j=1;j<=b-a+i-1;j++) {
       if(j<b-a-i-1) {
       printf("x"); } }
   printf("\n"); }
	return 0; }