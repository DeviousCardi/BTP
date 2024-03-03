#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i;
	scanf("%d",&h);
	for(i=1;i<=h;i++) {
	        int j,k;
	        if(i<=(h/2)+1) {
	        for(j=(h/2)+1-i;j>0;j=j-2)
	            printf(" ");
	        for(k=1;k<=i;k++)
	            printf("%d",h/2+1-i+k); }
	        printf("\n"); }
	return 0; }