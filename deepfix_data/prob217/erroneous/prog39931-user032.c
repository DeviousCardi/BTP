#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,i,j;
	long int a[10000],s;
	scanf("%d",&N);
	scanf("%ld",&s);
	for(i=0;i<N;i++) {
	 scanf("%ld",a[i];
	 for(j=i+1;j<N;j++) {
	  if(a[i]+a[j]==s)
	  printf("(a[i],a[j])\n"); } }
	return 0; }