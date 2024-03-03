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
   for(i=1;i<2;i++) {
       printf("%d\n",rec(19)); }
	return 0; }