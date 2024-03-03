#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,x,i,a[20],j;
	scanf("%d",&N);
	scanf("%d",&x);
	for(i=0;i<N;i++){
	  	scanf("%d",&a[i]); }
	  for(j=1;j<N;j++){
	  if((a[j-N]=x)&&(a[j-N-1]=x))
	printf("%1d",x); }
	return 0; }