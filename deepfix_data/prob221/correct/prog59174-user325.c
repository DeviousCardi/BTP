#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a,i=1,k,z;
	scanf("%d",&n);
	a=2*n-1;
	for(k=1;k<=a;k++)
	printf("*");
	printf("\n");
	for(z=2;z<n;z++){
	    for(i=1;i<=a-1;i++){
	        if(i==z+1)
	        printf("*");
	        if(i==a-1)
	        printf("*");
	        else
	        printf("1"); }
	    printf("\n");
	    a=a-1; }
	return 0; }