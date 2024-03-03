#include <stdio.h>
#include<math.h>
int main() {
    int n,i,j,k;
    scanf("%d",&n); {
	    for(i=(n+1)/2;i>=1;i=i-1) {
	        for(j=1;j<=(n+1)/2;j=j+1) {
	            if(j>=i) {
	                printf("%d",j); }
	            else {
	                printf(" "); } }
	       printf("\n"); } } {
	    for(i=2;i<=(n+1)/2;i=i+1) {
	        for(k=1;k<=(n+1)/2;k=k+1) {
	        if(k<i-1) {
	             printf(" "); }
	          else {
	              printf("%d",k); } }
     printf("\n"); } }
	return 0; }