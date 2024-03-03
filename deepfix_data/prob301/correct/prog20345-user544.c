#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,x,i,a[20];
	scanf("%d",&n);
	scanf("%d",&x);
	for(i=0;i<n;i++){
	  	scanf("%d",&a[i]);
	  if((a[i]=x)&&(a[i+n]=x))
	printf("%d",x); }
	return 0; }