#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,h,n;
	scanf("%d %d",&h,&n);
	for(i=1;i<=h;i++) {
	    for(k=h-i;k>0;k--) {
	        printf(" "); }
	    for(j=1;j<=n-(2*h)+(2*i);j++) {
	        printf("%d",(j+i-1)%10); }
	      printf("\n"); }
	return 0; }