#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=(1-n)/2;i<(1+n)/2;i++)
	    for(j=(1-n)/2;j<(1+n)/2;j++)
	        {if(abs(j)+abs(i)<(1+h)/2)
	            printf("*");
	        else if(j<0)
	            printf(" ");
	        printf("\n");}
	return 0; }