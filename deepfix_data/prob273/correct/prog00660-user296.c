#include <stdio.h>
#include<math.h>
int main() {
    int n,i,j,k;
    scanf("%d",&n); {
	    for(i=(n+1)/2;i>=1;i=i-1) {
	        for(j=i;j<=(n+1)/2;j=j+1) {
	            printf("%d",j); }
	       printf("\n"); } } {
	    for(i=1;i>=(n+1)/2;i=i+1) {
	        for(k=i;k<=(n+1)/2;k=k+1) {
	          printf("%d",k); }
     printf("\n"); } }
	return 0; }