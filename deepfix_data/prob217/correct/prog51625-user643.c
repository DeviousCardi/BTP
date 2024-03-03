#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,sum;
	scanf("%d,%d",&n,&sum);
	int c[n];
	int i,j,x=0;
	for (i=0;i<n;i++){
	    (x=x+c[i]+c[i+1]);
	      }	 if(sum==x)
	        printf("(%d %d)\n",(c[i],c[j]));
	return 0; }