#include <stdio.h>
#include <stdlib.h>
int main() {
	int height;
	scanf("%d",&height);
	int i,j,k,x,y=1;
	int n=height;
	for(i=1;i<=n;i++) {
	  	    x=n-i;
	        for(j=n-i;j>0;j--) {
	        printf(" "); }
	        for(k=1;k<=y;k++) {
	        printf("%d",(x+k)%10); }
	        for(y=1;y<=i;y=y+2) {
	            printf("\t",y); }
	        printf("\n"); }
    return 0; }