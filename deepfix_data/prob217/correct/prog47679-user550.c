#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[10000];
	int N;
	int S;
	int i,j;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	scanf("%d",&S);
	for(i=0;i<N;i++) {
	    for(j=0;(j<N)&&(j!=i);j++) {
	      if(a[i]+a[j]==S)
	     { if(i<j)
	      printf("(%d,%d)\n",a[i],a[j]);
	      else
	      printf("(%d,%d)\n",a[j],a[i]); } } }
	return 0; }