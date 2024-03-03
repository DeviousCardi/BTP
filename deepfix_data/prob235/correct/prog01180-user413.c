#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    for(j=1;j<=n;j++) {
	        if (i<=n/2+1) {
	        if(j<=n/2+1-i||j>=n/2+1+i) {
	             printf(" "); }
	       else {
	           printf("%d",j); } }
	        else if (i>n/2+1) {
	            if(j<=i-n/2-1||j>=i-n/2+1) {
	                printf(" "); }
	            else {
	                printf("%d",j); } } }
	    printf("\n"); }
	return 0; }