#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,b,i,j,m;
	scanf("%d ",&h);
	scanf("%d",&b);
	for (i=1; i<=h; i++){
	    j=1;
	    while(j<=h-i){
	    printf(" ");
	    j++; }
	    m=i;
	    while (m<b-2*h+2*i+2){
	        printf("%d",m%10);
	        m++; }
	    printf("\n"); }
	return 0; }