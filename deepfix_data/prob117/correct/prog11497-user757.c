#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int Han(int n) {
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return 2*Han(n-1)+1; }
int main() {
	int i,n,t,res,j;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    res=0;
	    scanf("%d",&n);
	    for(j=0;j<n+1;j++) {
	        if(n==Han(j)) {
	            res=1;
	            break; }
	        else if(n<Han(j)) {
	            break; } }
	    if(res==1)
	        printf("yes\n");
	    else
	        printf("no\n"); }
	return 0; }