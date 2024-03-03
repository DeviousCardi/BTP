#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,N,count=0;
	int a[10*10*10*10];
	scanf("%d",&N);
	   for(i=0;i<N;i++) {
	       scanf("%d",&a[i]);
	           if(a[i]%a[i]==0) {
	               count=count;
	               count=count+1; {
	                    printf("%d",count); } }
	       else return -1; }
	return 0; }