#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,k,j;k=0;
	scanf("%d\n",&N);
	int a[N];
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	for(i=0;i<N;i++) {
	    if(a[i]==a[i+1])
	    k=k+1;
	    if(k>=max)
	    {max=k;
	    j=i;}
	     if(a[i]!=a[i+1])
	     k=0; }
	printf("%d",a[j]);
	return 0; }