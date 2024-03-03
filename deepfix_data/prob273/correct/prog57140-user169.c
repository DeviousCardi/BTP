#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,max,i,j,k;
    scanf("%d",&n);
    max=(n+1)/2;
   for(i=0;i<((n+1)/2);i++) {
       for(j=(((n-i)/2)-1);j>0;j--)
       printf(" ");
       for(k=max-i;k<max+i;k++)
       printf("%d",k);
       printf("\n"); }
	return 0; }