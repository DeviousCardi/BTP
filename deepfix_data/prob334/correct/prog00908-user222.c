#include <stdio.h>
#include <stdlib.h>
int main() {
   int i,j,a,b,k,l;
   scanf("%d%d",&a,&b);
   l=(b-a)/2;
   if(l%2==0) {
       l=l+1; }
   for(i=0;i<a;i++) {
       k=i+1;
     for(j=1;j<=b-a+i+1;j++) {
       if(j<=l) {
       printf("x"); } }
  l=l-1; printf("\n"); }
	return 0; }