#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,max,i,j,k,x,y,z;
    scanf("%d",&n);
    max=(n+1)/2;
   for(i=0;i<((n+1)/2);i++) {
       for(j=(n/2-i);j>0;j--)
       printf(" ");
       for(k=max-i;k<=max;k++)
       printf("%d",k);
       printf("\n"); }
   for(x=2;x<(n-i+2);x++) {
       for(y=max+x-1;y>0;y--)
       printf(" ");
       for(z=x-1;z<=max;z++)
       printf("%d",z);
       printf("\n"); }
	return 0; }