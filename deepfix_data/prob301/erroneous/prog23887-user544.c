#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,x,i,a[20];
	scanf("%d",&n);
	scanf("%d",&x);
	for(i=0;i<n;i++){
	  	scanf("%d",&a[i]); }
	  if((a[i]=x)&&(a[n-i]=x)){
	printf("%d",x);
	  else
	    printf(" ");
	i++; }
	return 0; }