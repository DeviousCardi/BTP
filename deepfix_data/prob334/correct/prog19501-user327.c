#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,b,h,k;
	scanf("%d %d",&h,&b);
	for(i=1;i<=h;i++)
	{   k=i;
	        for(j=1;j<=b;j++) {
	            if(j<(h-1-i) || j>=(b+i-h))
	            printf(" ");
	            else {
	                    printf("%d",(k%10));
	                    k++; } }
	        printf("\n"); }
	return 0; }