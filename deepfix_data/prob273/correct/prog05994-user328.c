#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,m,i,j,k,l,o,p;
	scanf("%d",&h);
	m=(h+1)/2;
	p=m;
	for(i=1;i<=h;i++) {
	     for(l=p-1;l>=1;l--) {
	            printf(" "); }
	        p--;
	    for (j=1;j<=m;j++) {
	        if(((i+j)==(m+1))||((i>m)&&((i-j)==(m-1)))) {
	            for(k=j;k<=m;k++) {
	                printf("%d",k); } } }
	    if(i>m) {
	    for(o=1;o<=j;o++) {
	            printf(" "); } }
	    printf("\n"); }
	return 0; }