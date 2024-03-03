#include <stdio.h>
#include <stdlib.h>
int rec(int n) {
    if(n==1)
    return 2;
    else
    return 2*rec(n-1); }
int main() {
	int n,k,p,i;
    scanf("%d\n",&k);
   for(i=0;i<3;i++) {
       printf("%d",rec(1)); }
	return 0; }