#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,x,i,a[20],j=1;
	scanf("%d",&n);
	scanf("%d",&x);
	for(i=0;i<n;i++){
	  	scanf("%d",&a[i]); }
     for(i=0;i<n;i++){
	  if((a[i]=x)&&(a[j+i]=x))
	     printf("%d",x); }
	return 0; }