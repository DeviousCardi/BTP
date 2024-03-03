#include <stdio.h>
#include <stdlib.h>
long int han(int n) {
    if(n<=1)
    return 0;
    else
	return 2*(han(n-1))+1; }
int main() {
    int t,i,j,flag;
    long int k;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	   scanf("%ld\n",&k);
	   flag=0;
	 for(j=0;j<=1;j++) {
	     if(k==han(j))
	      { flag=1;
            break; } }
	    if(flag==1)
	     printf("yes\n");
	    else
         printf("no\n"); }
	return 0; }