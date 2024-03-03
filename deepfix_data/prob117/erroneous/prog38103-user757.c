#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long int Han(long n) {
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return 2*Han(n-1)+1; }
int main() {
	long int i,n,t,res,j, arr[1000];
	scanf("%ld",&t);
	for(i=0;i<t;i++) {
	    res=0;
	    scanf("%ld",&n);
	    for(j=0;j<=25;j++) {
	        if(n==Han(j)) {
	            printf("%d",j)
	            res=1;
	            break; } }
	    if(res==1)
	        printf("yes\n");
	    else
	        printf("no\n"); }
	return 0; }