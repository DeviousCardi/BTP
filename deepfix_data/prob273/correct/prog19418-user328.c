#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,m,i,j,k,l,p;
	scanf("%d",&h);
	m=(h+1)/2;
	p=m;
	for(i=1;i<=h;i++) {
	    for (j=1;j<=m;j++) {
	        for(l=p-1;p>=1;p--) {
	            printf(" "); }
	        p--;
	        if(((i+j)==(m+1))||((i>m)&&((i-j)==(m-1)))) {
	            for(k=j;k<=m;k++) {
	                printf("%d",k); } } }
	    printf("\n"); }
	return 0; }