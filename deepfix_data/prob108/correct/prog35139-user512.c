#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,t,n,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    t=i-2;
	    if(i>((n/2)+1))
	    {   j=j+2;
	        t=t-j; }
	    printf("*\n");
	    while(t>=0) {
	        printf(" ");
	        t--; }
	    if(!((i==0)||(i==n)))
	         printf("*\n"); }
	return 0; }