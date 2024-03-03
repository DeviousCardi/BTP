#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,x,i,a[20],j;
	scanf("%d",&N);
	scanf("%d",&x);
	for(i=0;i<N;i++){
	  	scanf("%d",&a[i]);
	  if((a[i]==x)&&(a[i+1]==x))
	    printf("%d",x); }
	return 0; }