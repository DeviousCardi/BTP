#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i;
	scanf("%d",&h);
	for(i=1;i<=h;i++) {
	    printf("*");
	    int j,t1=0;
	    for(j=2;(j<i)&&(j>0);j++) {
	        if(i>h/2)
	            j=j-2;
	        printf(" ");
	        t1++; }
	    if(t1!=0)
	    printf("*");
	    printf("\n"); }
	return 0; }