#include <stdio.h>
#include <stdlib.h>
long int han(int n) {
    if(n<=1)
    return 0;
    else
	return 2*(han(n-1))+1; }
int main() {
    int t,i,j;
    long int k;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	   scanf("%ld\n",&k);
	   for(j=0;j<=k;j++) {
	     if(k==han(j))
	     printf("yes\n");
	    else
         printf("no");
	}}
	return 0; }