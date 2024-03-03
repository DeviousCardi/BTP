#include <stdio.h>
#include <stdlib.h>
long int moves(int n) {
    if(n==1)
    return 1;
    else
    return 2*moves(n-1)+1; }
int main() {
   int n,t,i,k;
   scanf("%d",&t);
   for(i=0;i<t;i++) {
       scanf("%d",&k);
       printf("%ld",moves(k)); }
	return 0; }