#include <stdio.h>
#include <stdlib.h>
cat(int n){
    if(n==0)
    return 1;
    else
    return 2*(2*n-1)*cat(n-1)/(n+1); }
int main() {
     int t,n,i,j;
     scanf("%d\n",&t);
     for(i=0;i<t;i++) {
         scanf("%d\n",&n);
         for(j=0;j<10;j++) {
             if(cat(j)>=n)
             break; }
         printf("%d\n",cat(j-1)); }
	return 0; }