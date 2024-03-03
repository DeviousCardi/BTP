#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,n,s,i,j;
	scanf("%d",&n);
	a[10000];
	for(i=0;i<n;i=i+1)
	{scanf("%d"&a[i]);}
	scanf("%d",&s);
	for(i=0;i<n/2;i=i+1) {
	    for(j=i+1;j<n,j=j+1) {
	        if(a[i]==a[j])
	          printf("(%d,%d)",a[i],a[j]) } }
	return 0; }