#include <stdio.h>
#include <stdlib.h>
int main() {
	int height;
	scanf("%d",&height);
	int i,j,k,x,y,m;
	int n=height;
	for(i=1;i<=n;i++) {
	  	    for(y=1;y<=i;y=y+2) {
	  	        if(y%2!=0)
	  	        m=y; }
	  	    x=n-i;
	        for(j=n-i;j>0;j--) {
	        printf(" "); }
	        for(k=1;k<=m;k++) {
	        printf("%d",(x+k)%10); }
	        printf("\n"); }
    return 0; }