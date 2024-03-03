#include <stdio.h>
#include<math.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
	if(n>4) {
	    for(i=(n+1)/2;i>=1;i=i-1) {
	        for(j=i;j<=(n+1)/2;j=j+1) {
	            printf("%d",j); }
	       printf("\n"); } }
	return 0; }