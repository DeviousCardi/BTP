#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,t1=0;
	scanf("%d",&h);
	for(i=1;i<=h;i++) {
	    printf("*");
	    int j;
	    for(j=1;(j<i)&&(j>0);j++) {
	        printf(" ");
	        t1++; }
	    if(t1!=0)
	    printf("*\n"); }
	return 0; }