#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,s,i,j;int a[n];
	scanf("%d",&n);
	for(i=0;i<n-1;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d\n",&a[n-1]);
	scanf("%d",&s);
	for(i=0;i<n-1;i++) {
	    for(j=i+1;j<n;j++)
	    {  if(a[i]+a[j]==s)
	          {  printf("(%d%d)",i,j);
	              printf("\n");}
	}}
	return 0; }