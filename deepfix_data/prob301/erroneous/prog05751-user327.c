#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,a[10000],x,f=1,mode, k;
	scanf("%d", &x);
	for(i=0;i<x;i++)
	    scanf("%d", &n[i]);
	for(i=0;i<x;i++)
	    {   k=i;
	        while(a[i]==a[i+1]) {
	                i++; }
	       if(f<(i-k)) {
	            mode=a[i-1]; } }
	   printf("%d", mode);
	return 0; }