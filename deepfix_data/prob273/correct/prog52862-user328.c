#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,m,p;
	float i,j;
	scanf("%d",&h);
	m=(h+1)/2;
	for(i=m;i>=1;i--) {
	    for(j=1;j<=m;j++) {
	        p=j;
	        printf("%d\n",p); } }
	return 0; }