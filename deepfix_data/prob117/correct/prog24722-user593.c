#include <stdio.h>
#include <stdlib.h>
long int han(int n) {
    if(n==0)
    return 0;
    else if(n>=1)
    return 2*(han(n-1))+1;
    else
    return 0; }
int main() {
    int t,i,j;
    long int k;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	   scanf("%ld\n",&k);
	   j=1;
	   while(han(j)<k) {
       j++;
       k=han(j); }
	     if(k==han(j))
	     printf("yes\n");
	    else
         printf("no\n"); }
	return 0; }