#include <stdio.h>
#include <stdlib.h>
int main() {
	int height;
	scanf("%d",&height);
	int n=height;
	int i,j,m,y,k;
	for(i=1;i<=n;i++) {
	    m=1;
	    for(y=1;y<i;y++) {
	        m=m+2; }
	    for(j=n-i;j>0;j--) {
	        printf(" "); }
	    for(k=1;k<=m;k++) {
	        if(i!=n) {
	   	     if(k==1);
	   	     printf("*");
	   	     else if(k==m)
	   	     printf("*"); }
	        else {
	            printf("*"); } }
	    printf("\n"); }
	return 0; }