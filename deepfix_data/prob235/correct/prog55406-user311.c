#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k,l,m;
	scanf("%d",&h);
	for(i=h;i>0;i=i-1) {
	    for(j=1;j<i;j++) {
	        printf("\b"); }
	    for(k=1;k>0;k=k+2) {
	        for(l=1;l<=k;l++)
	        {   m=i;
	            printf("%d",m%10);
	            m++; } } }
	return 0; }